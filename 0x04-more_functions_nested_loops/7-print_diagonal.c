#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 * Return: diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int al;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (al = 1; al <= n; al++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
