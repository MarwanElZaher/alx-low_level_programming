#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input char
 * @needle: input char
 * Return: always 0 means success.
 */
char *_strstr(char *haystack, char *needle)
{
char *a, *b;

	for (; *haystack != '\0' ; haystack++)
	{
	*a = haystack;
	*b = needle;

	while (*a == *b && *b != '\0')
	{
	a++;
	b++;
	}

		if (*b == '\0')
			return (haystack);

	}
return (0);
}
