#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int upp = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + upp) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + upp) == letters[i])
			{
				*(s + upp) = rot13[i];
				break;
			}
		}
		upp++;
	}
	return (s);
}
