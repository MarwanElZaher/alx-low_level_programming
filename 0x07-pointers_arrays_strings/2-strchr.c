#include "main.h"
/**
 * _strchr - entry point were data is entered
 * @s: input
 * @c: input
 * Return: always 0 means success.
 */
char *_strchr(char *s, char c)
{
char *p;
int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			p = &s[count];
			break;
		}
	}
	if (s[count] == c)
	{
		p = &s[count];
	}
	return (p);
}
