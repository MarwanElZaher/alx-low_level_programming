#include "main.h"
/**
 * *_strcpy - copying the str pointed by src, including "\0"
 * @dest: point to buffer which is the place we copy into it.
 * @src: the string that is going to be copied.
 * Return: the pointer to pointer dest.
 */
char *_strcpy(char *dest, char *src)
{
int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
return (dest);
}

