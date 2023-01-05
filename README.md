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
2. [Visual-DOS-Tools-for-UEFI-Shell](https://github.com/KilianKegel/Visual-DOS-Tools-for-UEFI-Shell)
3. [Visual-ACPICA-for-UEFI-Shell](https://github.com/KilianKegel/Visual-ACPICA-for-UEFI-Shell)
4. [Visual-REFERENCE-COMPOSITION-for-UEFI](https://github.com/KilianKegel/Visual-Studio-for-UEFI-Shell/tree/master/Visual-REFERENCE-COMPOSITION-for-UEFI)
5. [Visual-TORO-C-LIBRARY-for-UEFI](https://github.com/KilianKegel/Visual-TORO-C-LIBRARY-for-UEFI)
6. [Visual-LIBXLSXWRITER-for-UEFI-Shell](https://github.com/KilianKegel/Visual-LIBXLSXWRITER-for-UEFI-Shell)
7. [Visual-LIBWIN32-for-UEFI](https://github.com/KilianKegel/Visual-LIBWIN32-for-UEFI)
8. [Visual-HWTools-for-UEFI-Shell](https://github.com/KilianKegel/Visual-HWTools-for-UEFI-Shell)

# Revision history
https://github.com/KilianKegel/torito-C-Library#revision-history
### 20230104
* update to **TORO C Library** *20230104*
### 20221023
* provide additional libraries to ease project composition
    * [Visual-REFERENCE-COMPOSITION-for-UEFI](https://github.com/KilianKegel/Visual-Studio-for-UEFI-Shell/tree/master/Visual-REFERENCE-COMPOSITION-for-UEFI)
    * [Visual-TORO-C-LIBRARY-for-UEFI](https://github.com/KilianKegel/Visual-TORO-C-LIBRARY-for-UEFI)
    * [Visual-LIBXLSXWRITER-for-UEFI-Shell](https://github.com/KilianKegel/Visual-LIBXLSXWRITER-for-UEFI-Shell)
    * [Visual-LIBWIN32-for-UEFI](https://github.com/KilianKegel/Visual-LIBWIN32-for-UEFI)
### 20221022
* add `O_TEMPORARY` support to Microsoft/POSIX `_open()`
* fixed "fall time bug" (autumn). Broken time calculation on 
  two digit month number (Oct, Nov, Dec).
### 20221009
*   add **Visual-REFERENCE-COMPOSITION-for-UEFI** to demonstrate how to compose an project 
	based on various libraries from external projects and configure
	`Release`/`Debug` for Windows/UEFI targets.
### 20220924
*   **Visual-ANSI-C-for-UEFI-Shell:** 
    change menu activation key (formerly ALT) to F10  for "C++ text UI/UX" sample program WELCOME14
    NOTE: ALT-key is not supported on all platforms https://www.youtube.com/watch?v=gMwCKA6SQrk
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
