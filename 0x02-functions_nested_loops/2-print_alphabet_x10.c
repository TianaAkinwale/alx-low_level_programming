include "main.h"

/**
 * print_alphabet_x10- prototype function
 *
 * desc-prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int times = 0;

	while (times <= 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		times++;
	}
}
