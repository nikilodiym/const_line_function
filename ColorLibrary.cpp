#include "ColorLibrary.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

static const int RED = FOREGROUND_RED;
static const int GREEN = FOREGROUND_GREEN;
static const int BLUE = FOREGROUND_BLUE;

void ColorLibrary::printInColor(const string& message, int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
    cout << message << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}