#ifndef INCLUDES_H_INCLUDED

#define INCLUDES_H_INCLUDED 42 // Include guard for includes.h
#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT 0x0501
#define WINVER 0x0501

#include <windows.h>
#include <string>
#include <sstream>
#include <gl/gl.h>
#include <commdlg.h>
#include "control_ids.h"
#include <vector>
using namespace std;

//Function prototypes time!
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
INT APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
void physicsCreateMenu(HWND hwnd);
void physicsFlashWindow(HWND hwnd);
void EnableOpenGL(HWND hwnd, HDC*, HGLRC*);
void DisableOpenGL(HWND, HDC, HGLRC);
std::string intToString(int i);
const char* strToChars(std::string str);
void openGlRenderScene();
//End function prototypes

extern HWND hwnd_main;
extern HDC hdc_main;
extern HGLRC hRC;

#endif // INCLUDES_H_INCLUDED
