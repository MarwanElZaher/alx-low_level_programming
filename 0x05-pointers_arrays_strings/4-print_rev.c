#include "main.h"
/**
 * print_rev - function that print a sting in reverse.
 * @s: pointer to a string  to be printed in reverse
 * Return: void (nothing)
 */
void print_rev(char *s)
{
int a;

	for (a = 0; s[a];)
	a++;
		for (a = a - 1; a >= 0; a--)

		{
		_putchar(s[a]);
		}
_putchar('\n');
}
