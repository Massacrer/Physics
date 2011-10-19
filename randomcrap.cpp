#include "includes.h"

void physicsShakeWindow(HWND hwnd) {
    FLASHWINFO info;
    info.cbSize = sizeof(FLASHWINFO);
    info.hwnd = hwnd;
    info.dwFlags = 3;
    info.uCount = 10;
    info.dwTimeout = 1000;
    FlashWindowEx(&info);
}
