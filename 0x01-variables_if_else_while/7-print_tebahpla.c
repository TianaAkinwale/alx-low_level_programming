#include <stdio.h>

/**
 *
 * main - Entry point
 *
 *desc:prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success/correct)
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122 ; alphabet >= 97; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
