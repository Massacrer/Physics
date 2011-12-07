#include "includes.h"

void physicsCreateMenu(HWND hwnd) {
    HMENU hMenu = CreateMenu();             // Root menu bar, attached to the program
    HMENU hFileMenu = CreatePopupMenu();    // File menu

    // File menu, on main menu bar
    AppendMenu(hMenu,MF_POPUP,(UINT_PTR)hFileMenu,"&File");
    HBITMAP h = (HBITMAP) LoadImage(NULL,"\\res\\42.jpeg",IMAGE_BITMAP,32,32,LR_LOADFROMFILE);
    AppendMenu(hMenu,MF_BITMAP,MENU_TEST,(LPCTSTR)h);
    AppendMenu(hMenu,MF_STRING,MENU_TEST,"&Test");

    // Entries on file menu
    AppendMenu(hFileMenu,MF_STRING,FILE_TESTBUTTON,"&Click Me!");
    AppendMenu(hFileMenu,MF_STRING,FILE_FLASHWINDOW,"&Flashy :)");
    AppendMenu(hFileMenu,MF_STRING,FILE_OPEN,"&Open");
    AppendMenu(hFileMenu,MF_STRING|MF_SEPARATOR,NULL,NULL);
    AppendMenu(hFileMenu,MF_STRING,FILE_EXIT,"&Exit");

    SetMenu(hwnd, hMenu);
    return;
}
