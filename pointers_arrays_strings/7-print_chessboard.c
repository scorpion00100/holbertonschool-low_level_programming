#include "main.h"

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{
	int ligne;
	int col;

	for (ligne = 0; ligne < 0; ligne++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[ligne][col]);
		}
		_putchar('\n');
	}
}
