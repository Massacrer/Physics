#include "includes.h"

/*	Windows Procedure Event Handler*/
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT paintStruct;
	/*	Device Context*/
	HDC hDC;
	/*	Switch message, condition that is met will execute*/
	switch(message)
	{
		/*	Window is being created*/
		case WM_CREATE:
            physicsCreateMenu(hwnd);
			return 0;
			break;
		/*	Window is closing*/
		case WM_CLOSE:
			PostQuitMessage(0);
			return 0;
			break;
		/*	Window needs update*/
		case WM_PAINT:
			hDC = BeginPaint(hwnd,&paintStruct);
			/*	Set txt color to blue*/
			SetTextColor(hDC, COLORREF(0x00FF0000));
			EndPaint(hwnd, &paintStruct);
			return 0;
			break;
		case WM_COMMAND:
            switch(LOWORD(wParam))
            {
                case FILE_TESTBUTTON:
                    MessageBox(hwnd,"You pressed the \"Test\" button, well done! the game.","Message Box",MB_OK);
                    break;
                case FILE_EXIT:
                    PostMessage(hwnd,WM_CLOSE,0,0);
                    break;
                case FILE_FLASHWINDOW:
                    MessageBox(hwnd,"Body","Title",MB_OK);
                    physicsFlashWindow(hwnd);
                    break;
                case FILE_OPEN:
                    OPENFILENAME ofn;

                    break;
                default:
                    break;
            }
            return 0;
            break;
		default:
            return (DefWindowProc(hwnd,message,wParam,lParam));
			break;
	}
}
