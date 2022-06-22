#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds square root
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: the square root,if num has natural sqrt.If the numer doesn't, -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns square root
 * @n: integer parameter to return root of
 * Return: sqrt if a natural root.
 */

int _sqrt_recursion(int n)
{
	int sqrooot = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, sqrooot));
}
