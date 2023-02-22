#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - used to print all numbers from 98
 * @n: is the starting number
 * Return: value
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

