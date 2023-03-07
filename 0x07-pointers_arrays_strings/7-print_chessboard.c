#include "main.h"
/**
 * print_chessboard - print chessboard 2D array
 * @a: 2D array
 * Return: nothing (void)
*/
void print_chessboard(char (*a)[8])
{

int r;
int c;

for (r = 0; r < 8; r++)
{
for (c = 0; c < 8; c++)
_putchar(a[r][c]);
_putchar('\n');
}
}
