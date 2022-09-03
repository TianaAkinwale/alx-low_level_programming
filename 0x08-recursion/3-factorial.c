#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial
 * Return: If n > 0 - the factorial of n
 */

int factorial(int n)
{
	int num = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	num *= factorial(n - 1);
	return (num);
}
