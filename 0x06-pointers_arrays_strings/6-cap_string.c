#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int upp = 0, i;
	int words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + upp) >= 97 && *(s + upp) <= 122)
	{
		*(s + upp) = *(s + upp) - 32;
	}
	upp++;

	while (*(s + upp) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + upp) == words[i])
			{
				if ((*(s + (upp + 1)) >= 97) && (*(s + (upp + 1)) <= 122))
				{
					*(s + (upp + 1)) = *(s + (upp + 1)) - 32;
				}
				break;
			}
		}
		upp++;
	}
	return (s);
}
