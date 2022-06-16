#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int upp = 0;

	while (*(s + upp) != '\0')
	{
		if ((*(s + upp) >= 97) && (*(s + upp) <= 122))
		{
			*(s + upp) = *(s + upp) - 32;
		}
		upp++;
	}

	return (s);
}
