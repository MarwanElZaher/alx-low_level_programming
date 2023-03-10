#include "main.h"
/**
 * _strpbrk - entry point
 * @s: input char
 * @accept: input char
 * Return: always 0 means success.
 */
char *_strpbrk(char *s, char *accept)
{
int a = 0;

	while (*s)
	{
		for (a = 0 ; accept[a] ; a++)
		{
		if (*s == accept[a])
		return (s);
		}
		s++;
	}
return (0);

}
