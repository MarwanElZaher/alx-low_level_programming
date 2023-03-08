#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to be measured
 * Return: always 0 (means success)
 */
int _strlen_recursion(char *s)
{
int a = 0;
int len = 0;
	if (s[a] != '\0')
	{
	len++;
	len = len + _strlen_recursion(s + 1);
	}
return (len);
}
