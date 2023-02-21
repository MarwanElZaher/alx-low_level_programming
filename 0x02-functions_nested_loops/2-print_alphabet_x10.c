#include "main.h"
/**
 * print_alphabet_x10 - it prints alphabets in 10 lines nested loop
 * Return: always 0
 */
void print_alphabet_x10(void)
{
int a;
char b;

	while (a < 10)
	{
	for (b = 97 ; b < 123 ; b++)
	{
	_putchar(b);
	}
	_putchar('\n');
	a++;
	}
}
