#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int t, add1 = 0, adds = 0;

	for (t = 0; t < size; t++)
	{
		add1 += *(a + (size * t + t));
		adds += *(a + (size * t + size - 1 - t));
	}
	printf("%d, ", add1);
	printf("%d\n", adds);
}
