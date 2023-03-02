#include "main.h"
/**
 * string_toupper - function used to capitalize a string.
 * @s: the string to be in upper case instead of lower case
 * Return: Always 0 (means success).
 */
char *string_toupper(char *s)
{
int a;

	for (a = 0 ; s[a] != '\0' ;)
	{
		if ((s[a] >= 97) && (s[a] <= 122))
		{
			s[a] = s[a] - 32;
		}
	a++;
	}
	return (s);
}
