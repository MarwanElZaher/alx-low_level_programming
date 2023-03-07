#include "main.h"
/**
 * _strchr - entry point were data is entered
 * @s: input
 * @c: input
 * Return: always 0 means success.
 */
char *_strchr(char *s, char c)
{
int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
	if (s[a] == c)
		return (&s[a]);

	}
return (0);
}
