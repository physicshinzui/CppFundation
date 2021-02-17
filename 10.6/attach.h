#ifndef HEADER_H
#define HEADER_H
#include <iostream>

//prototype
void justtprint();
int min(int x, int y);

//definition
int min(int x, int y) {
    return x > y ? y : x;
}

#endif