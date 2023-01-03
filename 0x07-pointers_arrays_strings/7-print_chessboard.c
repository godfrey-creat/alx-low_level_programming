#include "main.h"
/**
 * print_chessboard - print the chessboard in 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int k, l;

	k = 0;

	while (k < 8)
	{
		l = 0;
		while (l < 8)
		{
			_putchar(a[k][l]);
			l++;
		}
		_putchar('\n');
		k++;
	}
}
