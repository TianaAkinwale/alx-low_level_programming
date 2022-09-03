#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *caten;
	int stng1 = 0, stng2 = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + a))
		stng1++, a++;
	while (*(s2 + b))
		stng2++, b++;
	stng2++;/*adds null terminator to string length.*/
	caten = malloc(sizeof(char) * (stng1 + stng2));/*allocate memory*/
	if (caten == NULL)/*validate memory*/
		return (NULL);
	a = 0, b = 0;
	while (a < stng1)/*concatenate*/
	{
		*(caten + a) = *(s1 + a);
		a++;
	}
	while (b < stng2)
	{
		*(caten + a) = *(s2 + b);
		a++;
		b++;
	}
	return (caten);
}
