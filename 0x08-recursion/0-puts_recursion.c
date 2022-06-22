#include "main.h"


/**
 * _puts_recursion - Prints a string
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
