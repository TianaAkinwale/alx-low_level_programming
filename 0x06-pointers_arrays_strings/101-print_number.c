#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int a, t, upp;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}
	t = a;
	upp = 1;

	while (t > 9)
	{
		t /= 10;
		upp *= 10;

	}
	for (; upp >= 1; upp /= 10)
	{
		_putchar(((a / upp) % 10) + 48);
	}
}
