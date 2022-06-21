#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
 */

void print_chessboard(char (*a)[8])
{
	int d, b;

	for (d = 0; d < 8; d++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(*(*(d + a) + b));
		}
		_putchar('\n');
	}
}
