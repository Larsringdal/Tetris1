#include <stdio.h>
#include <iostream>
#include <windows.h> 
#include <conio.h>
#include "matrix_manipulation.h"


int main() {
    char key = NULL;
    int matrix[10][20];
    initMatrix(matrix);
    setMatrix(matrix);

    while (key != 'q') {
        key = _getch();
        if (key == 's') {
            drawMatrix(matrix);
        }
    }

    return 0;
}

int getUserInput() { //returns 0 for no input, 1 for a (rotate left), 2 for d (rotate right)
    return 0;
    

}





