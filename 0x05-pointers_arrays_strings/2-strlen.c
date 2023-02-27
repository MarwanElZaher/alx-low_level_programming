#include "main.h"
/**
 * _strlen - is a function that print the length of a string.
 * @s: shows the length of string.
 * Return: it returns the length of the string excluding '\0'.
 */
int _strlen(char *s)
{
int a = 0;

	for (a = 0; s[a] != '\0';)
	a++;
return (a);
}
