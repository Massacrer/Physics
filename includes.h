#ifndef INCLUDES_H_INCLUDED

#define INCLUDES_H_INCLUDED 42 // Include guard for includes.h
//#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT 0x0501
#define WINVER 0x0501

#include <windows.h>
#include <string>
#include <commdlg.h>
#include "control_ids.h"

//Function prototypes time!
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
INT APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
void physicsCreateMenu(HWND hwnd);
void physicsFlashWindow(HWND hwnd);
//End function prototypes

#endif // INCLUDES_H_INCLUDED
