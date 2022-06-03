#include <stdio.h>

/**
 * main - entry point
 *
 * desc:print lettersw of alphabet using putchar
 *
 * return: always 0 (success)
 */
int main (void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
