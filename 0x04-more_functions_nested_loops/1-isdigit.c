#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: integer
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
