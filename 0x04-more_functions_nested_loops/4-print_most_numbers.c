#include "main.h"

/**
 * print_most_numbers - prints the numbers,from 0 to 9
 * ,followed by a new line.
 * Return: 0-9, excluding 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		if (t == 2 || t == 4)
		{
			continue;
		}
		else
		{
			_putchar(t + '0');
		}
	}
	_putchar('\n');
}
