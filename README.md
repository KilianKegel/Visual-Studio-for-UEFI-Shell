# Visual-Studio-for-UEFI-Shell
Getting started with Visual Studio 2022 for UEFI Shell and ANSI C cross-development.
![visualUefi](visualUefiWide.png)

Many samples, how to 
* use [native UEFI API](https://uefi.org/sites/default/files/resources/UEFI_Spec_2_7.pdf) from ANSI C
* access PCI
* port MSDOS programs to UEFI Shell ([find](https://github.com/KilianKegel/Visual-DOS-Tools-for-UEFI-Shell/blob/master/find/main.c), [more](https://github.com/KilianKegel/Visual-DOS-Tools-for-UEFI-Shell/blob/master/more/main.c))

![C](https://github.com/KilianKegel/Visual-ANSI-C-for-UEFI-Shell/blob/master/CfgMgr.png)

collection of UEFI Shell projects for Visual Studio:

1. [Visual-ANSI-C-for-UEFI-Shell](https://github.com/KilianKegel/Visual-ANSI-C-for-UEFI-Shell#visual-ansi-c-for-uefi-shell)
2. [Visual-HWTools-for-UEFI-Shell](https://github.com/KilianKegel/Visual-HWTools-for-UEFI-Shell)
3. [Visual-DOS-Tools-for-UEFI-Shell](https://github.com/KilianKegel/Visual-DOS-Tools-for-UEFI-Shell)
4. [Visual-ACPICA-for-UEFI-Shell](https://github.com/KilianKegel/Visual-ACPICA-for-UEFI-Shell)

# Revision history
https://github.com/KilianKegel/torito-C-Library#revision-history
### 20220607
* **Visual-ANSI-C-for-UEFI-Shell:** 
	- demonstration of C++ text UI/UX design for UEFI Shell
### 20220507
* **Visual-ANSI-C-for-UEFI-Shell:** 
	- add support and demo for John McNamara's Microsoft Excel writer library [*libxlsxwriter*](https://github.com/jmcnamara/libxlsxwriter#libxlsxwriter)
* **Visual-DOS-Tools-for-UEFI-Shell:** 
	- update/improve `find`, `more` to support both 8+16Bit `stdin`
	- add program documentation

### 20220505
* suppress build warning *MSB8012* due to redirected library output path

### 20220502
* add  Visual-LIBXLSXWRITER-for-UEFI-Shell
* update to **TORO C Library** *20220501* for all projects
