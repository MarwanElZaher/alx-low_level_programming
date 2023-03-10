#include "main.h"
/**
 * _strncat - cat "n" number of char from string.
 * @dest: the string destination.
 * @src: it is the source string to be concatenated "cat" to the destination.
 * @n: an input value
 * Return: to dest string after concatenating n charachters to it.
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;

	for (a = 0 ; dest[a] != 0 ; a++)
	{};
		for (b = 0 ; b < n && src[b] != '\0' ;)
			{
			dest[a] = dest[a] + src[b];
			a++;
			b++;
			}
				dest = dest + '\0';
return (dest);
}
