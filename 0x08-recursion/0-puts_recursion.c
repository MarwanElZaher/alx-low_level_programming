#include "main.h"
/**
 * _puts_recursion - a function that prints a string using recursion
 * @s: string to be printed
 * Return: nothing (void)
 */
void _puts_recursion(char *s)
{
int i = 0;

	if (s[i] == '\0')
	{
	_putchar('\n');
	}
	else
	{
	_putchar(s[i]);
	_puts_recursion(s + 1);
	}
}
