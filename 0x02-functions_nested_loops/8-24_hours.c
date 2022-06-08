#include "main.h"

/**
 * jack_bauer -prints every minute of the day of 
 * Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0 < 24; h++;)
	{
		for (h = 0; h < 60; h++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
