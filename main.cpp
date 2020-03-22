#include <stdio.h>
#include <iostream>
#include <windows.h> 
#include <conio.h>
#include "matrix_manipulation.h"


int main() {
    char key = NULL;

    while (key != 'q') {
        key = _getch();
        if (key == 's') {
            setPrintMatrix();
        }
    }

    return 0;
}





