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

std::string intToString (int i) {
    std::stringstream stream;
    stream << i;
    return stream.str();
}

const char* strToChars(std::string str) {
    return str.c_str();
}
