#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible - 0.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);

	}
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number is to be checked.
 * Return: If the number is prime - 1.
 */

int is_prime_number(int n)
{
	int v = 2;

	if (n <= 1)
	{
		return (0);

	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, v));
}
