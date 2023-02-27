#include "main.h"
/**
 * rev_string - it is a function that reverse a string.
 * @s: point to string to be reversed.
 * Return: void (nothing).
 */
void rev_string(char *s)
{
	int a, b;
	int c = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}

	c = c - 1;
	a = 0;
	while (c > a)
	{
		b = s[a];
		s[a] = s[c];
		s[c] = b;
		a++;
		c--;
	}
}
