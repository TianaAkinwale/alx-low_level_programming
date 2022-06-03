#include <stdio.h>

/**
 * main - entry point
 *
 * desc: prints the alphabet in lowercase, followed by a new line.
 *
 * return: always 0 (success)
 */

int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;
		else if (alphabet == 'e')
			continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
