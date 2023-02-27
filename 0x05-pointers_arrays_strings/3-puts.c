#include "main.h"
/**
 * _puts - function that print a string followed by a new line '\n'
 * @str: contain the string that would be printed.
 * Return: always 0 (means success)
 */
void _puts(char *str)
{
int a;

	for (a = 0; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}


_putchar('\n');





}
