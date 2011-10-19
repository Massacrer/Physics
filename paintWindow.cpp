#include <windows.h>

void paintWindow(void) {
    hDC = BeginPaint(hwnd,&paintStruct);
    /*	Set txt color to blue*/
	SetTextColor(hDC, COLORREF(0x00FF0000));
	/*	Display text in middle of window*/
    //string = "Width: " + GetSystemMetrics(SM_CXSCREEN);
    //use http://www.parashift.com/c++-faq-lite/misc-technical-issues.html here (iostream)
    TextOut(hDC,150,100,string,sizeof(string)-1);
    //string = "Hello, World!";
		TextOut(hDC,150,150,string,sizeof(string)-1);
		EndPaint(hwnd, &paintStruct);
}
