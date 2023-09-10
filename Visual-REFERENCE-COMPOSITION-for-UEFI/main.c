#include <stdio.h>
#include <stdlib.h>
#include "..\Visual-HWTools-for-UEFI-Shell\includes\UniDump.h"
#include "..\Visual-LIBXLSXWRITER-for-UEFI-Shell\libxlsxwriter\include\xlsxwriter.h"

#define BSIZE 256

lxw_worksheet* worksheet = NULL;
lxw_row_t row = 1;// reserve line 0 for coloumn title

/*!
    @fn unsigned long long GetMem8(void *pAddr)

    @brief read a BYTE from a given memory location

    @details

    @param[in] *pAddr

    @return byte read
*/
unsigned long long GetMem8(void* pAddr)
{
    unsigned char nRet, * p = (unsigned char*)pAddr;
    nRet = 0xFF & *p;
    return nRet;

}

/*!
    @fn static unsigned WriteString(IN char *pszLineOfText)

    @brief print a text line

    @details

    @param[in] *pszLineOfText : pointer to ZERO terminated text line

    @return 0
*/
unsigned WriteString(char* pszLineOfText)
{

    printf(pszLineOfText);

    return 0;
};

unsigned WriteString2XLSX(char* pszLineOfText)
{
    unsigned long long addr;
    unsigned char line[16];
    char strByte[3/* 2 digit string + '\0' */];
    char strAddr[17/* 16 digit string + '\0' */];

    int n = sscanf(pszLineOfText, "%llX: %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx - %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx",
        &addr,
        &line[ 0],
        &line[ 1],
        &line[ 2],
        &line[ 3],
        &line[ 4],
        &line[ 5],
        &line[ 6],
        &line[ 7],
        &line[ 8],
        &line[ 9],
        &line[10],
        &line[11],
        &line[12],
        &line[13],
        &line[14],
        &line[15]);

    //
    // if 17 elements were successfully scanned
    //
    if (17 == n) {
        printf("%016llX %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X\n",
            addr,
            line[0],
            line[1],
            line[2],
            line[3],
            line[4],
            line[5],
            line[6],
            line[7],
            line[8],
            line[9],
            line[10],
            line[11],
            line[12],
            line[13],
            line[14],
            line[15]);
        
        //
        // convert address to string , write address string
        //
        sprintf(strAddr, "%016llX", addr);
        worksheet_write_string(worksheet, row, 0, strAddr, NULL);

        //
        // convert each byte to string, write byte strings
        //
        for (int i = 0; i < 16; i++)
        {
            sprintf(strByte, "%02X", line[i]);
            worksheet_write_string(worksheet, row, (lxw_col_t)i + 1, strByte, NULL);
        }
    }
    row++;

    return 0;
};

int main(/*int argc, char** argv*/)
{
    char* p = malloc(BSIZE);
    UNIDUMPPARM hexparms = { .reg = 0, .bit.elmsizemin1 = 0, .bit.fBaseOfs = 0 };
    void* pfn = &GetMem8;
    char strtmp[32];


    printf("Welcome, to Visual-REFERENCE-COMPOSITION-for-UEFI ...\n");

    ////
    // fill buffer with a pattern 
    ////
    for (int i = 0; i < BSIZE; i++)
        p[i] = (char)i;

    ////
    // dump buffer to STDOUT
    ////
    UniDump(hexparms, BSIZE, (unsigned long long)p, pfn, WriteString);

    ////
    // dump buffer an EXCEL file "hexdump.xlsx"
    ////
    printf("Write buffer to EXCEL file \"hexdump.xlsx\"...");
    lxw_workbook* workbook = workbook_new("hexdump.xlsx");

    worksheet = workbook_add_worksheet(workbook, NULL);

    //
    // write coloumn header "Addr" "[00]" "[01]" "[02]" "[03]" ...
    //
    worksheet_write_string(worksheet, 0, 0, "Addr", NULL);
    for (int i = 0; i < 16; i++)
    {
        sprintf(strtmp, "[%02X]", i);
        worksheet_write_string(worksheet, 0, (lxw_col_t)i + 1, strtmp, NULL);
    }

    //UniDump(hexparms, BSIZE, (unsigned long long)p, pfn, WriteString2XLSX);

    workbook_close(workbook);
    printf("finished\n");

    return 0;
}