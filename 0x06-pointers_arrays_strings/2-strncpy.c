#include "main.h"
/**
 * _strncpy - it is a function used to copy a string n char.
 * @dest: pointer to the place of copied string.
 * @src: it is a pointer to the string to be copied.
 * @n: number of charachters to be copied.
 * Return: to the destination of the copied data.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	for (; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];

	for (; c < n; c++)
		dest[c] = '\0';

	return (dest);
}
