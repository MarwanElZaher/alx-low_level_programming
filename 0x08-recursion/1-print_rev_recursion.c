#include "main.h"
/**
 * _print_rev_recursion - function that is used to print string in a reverse.
 * @s: string to be printed in reverse.
 * Return: nothing (void)
 */
void _print_rev_recursion(char *s)
{
int i = 0;
	if (s[i] != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
