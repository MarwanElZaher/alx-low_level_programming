#include "main.h"
/**
 * print_most_numbers - is a function used to print from 0 to 9 excluding (2,4)
 * Return: void (nothing)
 */
void print_most_numbers(void)
{
int a;

	for (a = 48; a < 58; a++)
	{
		if ((a == 50) || (a == 52))
		{
		continue;
		}
		_putchar(a);
		}
_putchar('\n');
}
