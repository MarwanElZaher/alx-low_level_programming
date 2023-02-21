#include "main.h"
/**
 * print_alphabet - print alphabets in lower case using putchar.
 * Return: always 0 means success.
 */
void print_alphabet(void)
{
char a;

	for (a = 97 ; a < 123 ; a++)
	_putchar(a);
	_putchar('\n');
}
