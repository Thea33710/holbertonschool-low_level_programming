#include "main.h"

/**
 * print_chessboard - Entry point
 *
 * Description: print chessboard
 * @a: string
 *
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
int i, j;
char c;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
c = a[i][j];
_putchar(c);
}
_putchar('\n');
}
}
