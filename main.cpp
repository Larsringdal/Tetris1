#include <stdio.h>
#include <iostream>
#include <windows.h> 
#include <time.h>
#include <conio.h>

void gotoxy(int x, int y);
void setMatrix(int matrix[][20]);
void printMatrix(int matrix[][20]);
void setPrintMatrix();
void drawMatrix(int matrix[][20]);

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

void setPrintMatrix() {
    int matrix[10][20];
    setMatrix(matrix);
    drawMatrix(matrix);
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setMatrix(int matrix[][20]) {
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < 20; j++) {

            if (matrix[i - 1][j] == 0) {
                matrix[i][j] = 1;
            }
            else {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(int matrix[][20]) {
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (j == 19) {
                std::cout << matrix[i][j] << "\n";
            }
            else {
                std::cout << matrix[i][j] << " ";
            }

        }
    }

}

void drawMatrix(int matrix[][20]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (matrix[i][j] == 1)
                gotoxy(i, j);
            std::cout << char(178);
        }
    }
}