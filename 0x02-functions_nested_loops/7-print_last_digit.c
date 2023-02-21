#include "main.h"
/**
 * print_last_digit - function used to print last digit of a number
 * @a: hold the number
 * Return: the last digit of a number
 */
int print_last_digit(int a)
{
int n;

	if (a < 0)
	{
	n = -1 * (a % 10);
	_putchar(n + '0');
	return (n);
	}
		else
		{
		n = a % 10;
		_putchar(n + '0');
		return (n);
		}
}
