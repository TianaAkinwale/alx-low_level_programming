#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i, f, tia;

	for (i = 0; i < n - 1; i++)
	{
		for (f = i + 1; f > 0; f--)
		{
			tia = *(a + f);
			*(a + f) = *(a + (f - 1));
			*(a + (f - 1)) = tia;
		}
	}
}
