#include "includes.h"

HWND hwnd_main;

/*	Main function*/
INT APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     INT       nCmdShow)
{
	WNDCLASSEX  windowClass;		//window class
	MSG			msg;				//message
	bool		done;				//flag saying when app is complete
    HDC hDC;
    HGLRC hRC;
	/*	Fill out the window class structure*/
	windowClass.cbSize = sizeof(WNDCLASSEX);
	windowClass.style = CS_HREDRAW | CS_VREDRAW;
	windowClass.lpfnWndProc = WndProc;
	windowClass.cbClsExtra = 0;
	windowClass.cbWndExtra = 0;
	windowClass.hInstance = hInstance;
	windowClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	windowClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	windowClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	windowClass.lpszMenuName = NULL;
	windowClass.lpszClassName = "physicsMainWindowClass";
	windowClass.hIconSm = LoadIcon(NULL, IDI_WINLOGO);
	/*	Register window class*/
	if (!RegisterClassEx(&windowClass)) return 0;

	/*	Class registerd, so now create window*/
	hwnd_main = CreateWindowEx(NULL,		//extended style
		"physicsMainWindowClass",			//class name
		"Environment-42",		//app name
		WS_OVERLAPPEDWINDOW | WS_VISIBLE | WS_SYSMENU | WS_BORDER | WS_MAXIMIZE | CS_OWNDC, //window style
		CW_USEDEFAULT,CW_USEDEFAULT,			//x/y coords
		CW_USEDEFAULT,CW_USEDEFAULT,			//width,height
		NULL,				//handle to parent
		NULL,				//handle to menu
		hInstance,			//application instance
		NULL);				//no extra parameter's
	/*	Check if window creation failed*/
	if (!hwnd_main)
		return 0;

    EnableOpenGL(hwnd_main, &hDC, &hRC);

	done = false; //initialize loop condition variable
	/*	main message loop*/
	while(!done)
	{
		PeekMessage(&msg,NULL,NULL,NULL,PM_REMOVE);
		if (msg.message == WM_QUIT) //check for a quit message
		{
			done = true; //if found, quit app
		}
		else
		{
			/*	Translate and dispatch to event queue*/
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		openGlRenderScene();

	}
	DisableOpenGL(hwnd_main, hDC, hRC);
	return msg.wParam;
}
