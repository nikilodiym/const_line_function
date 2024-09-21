#pragma once
#ifndef COLORLIBRARY_H
#define COLORLIBRARY_H

#include <string>

class ColorLibrary {
public:
    static const int RED = 1;
    static const int GREEN = 2;

    static void printInColor(const std::string& message, int color);
};

#endif