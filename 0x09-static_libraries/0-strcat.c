#include "main.h"
/**
 * _strcat - it is a function that append a string to another string
 * concatenate two strings "cat".
 * @dest: value to be inputed.
 * @src: value to be inputed.
 * Return: (value) @dest.
 */
char *_strcat(char *dest, char *src)
{
int a, b;

	for (a = 0 ; dest[a] != 0 ; a++)
	{};
		for (b = 0 ; src[b] != 0 ;)
		{
		dest[a] = src[b];
		a++;
		b++;
		}

		dest[a] = '\0';

return (dest);
}

