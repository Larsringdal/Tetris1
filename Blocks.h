
#ifndef _BLOCK_
#define _BLOCK_

void gotoxy(int x, int y);
void blockSelect(int type, int orientation, int matrix[][30], int x, int y);
void initMatrix(int matrix[][30]);
void printMatrix(int matrix[][30], int x, int y);
void SquareDraw(int matrix[][30], int orientation, int x, int y);
void LDraw(int matrix[][30], int orientation, int x, int y);
void InvLDraw(int matrix[][30], int orientation, int x, int y);
void ZDraw(int matrix[][30], int orientation, int x, int y);
void InvZDraw(int matrix[][30], int orientation, int x, int y);
void TDraw(int matrix[][30], int orientation, int x, int y);
void HeroDraw(int matrix[][30], int orientation, int x, int y);

#endif