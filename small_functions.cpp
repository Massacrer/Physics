#include "includes.h"

void physicsFlashWindow(HWND hwnd) {
    FLASHWINFO fwi;
    fwi.cbSize = sizeof(FLASHWINFO);
    fwi.dwFlags = FLASHW_ALL;
    fwi.dwTimeout = 0;
    fwi.hwnd = hwnd;
    fwi.uCount = 42;
    FlashWindowEx(&fwi);
}
