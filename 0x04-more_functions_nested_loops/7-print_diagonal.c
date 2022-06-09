#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 * Return: diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int t, f;

	if (n <= 0)
	{
		_putchar('\n')
	}
	for (t = 0; t < n; t++)
	{
		for (f = 0; f < t; f++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
