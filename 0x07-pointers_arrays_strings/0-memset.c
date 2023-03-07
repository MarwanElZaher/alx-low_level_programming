#include "main.h"
/**
 * _memset - is a function used to fill n bytes pointed by s pointer
 * @s: pointer to the memory place.
 * @b: is a constant variable to fill 's' with.
 * @n: number of bytes of the memory place to be filled.
 * Return: 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
	s[a] = b;
	n--;
	}



return (s);
}
