#include "main.h"

/**
 * print_square -prints a square
 * @size: -size of the square
 * Return: square made of #
 */

void print_square(int size)
{
	int al, at;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (al = 1; al <= size; al++)
		{
			_putchar('#');

			for (at = 2; at <= size; at++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
