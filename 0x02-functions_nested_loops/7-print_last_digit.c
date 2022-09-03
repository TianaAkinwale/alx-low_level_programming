#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @p: p is an integer
 *
 * Return: integer
 */

int print_last_digit(int p)
{
	int num = p % 10;

	if (p < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');

	return (num);
}
