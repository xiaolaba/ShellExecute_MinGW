/*********************************************************************\
 uses MinGW to compile a console program, used to open PDF file
 
 
 how to : 
 C:\MinGW\msys\1.0\msys.bat
 
 gcc ShellExecute_MinGW.c -o ShellExecute_MinGW.exe
 
 Author : xiaolaba

\******************************************************************* */

#include <stdio.h>	// for printf()
//#include <stdlib.h>

#include <windows.h>	// for ShellExecute() of win32 API
#include <shellapi.h>	// for ShellExecute() of win32 API

void openpdf()
{
    // slow
    //ShellExecute(GetDesktopWindow(), "open", "a.pdf", NULL, NULL, SW_SHOWNORMAL);
	
    //faster
    ShellExecute(NULL, "open", "a.pdf", NULL, NULL, SW_SHOW);
}


/*
** main
**
*/
int main()
{

    printf( "open a.pdf\n" );
    openpdf ();

    return 0;
}


