#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int t, ab;

	for (ab = 0; ab < 10; ab++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t >= 10)
			{
				_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
