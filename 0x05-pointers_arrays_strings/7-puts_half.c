#include "main.h"
/**
 * puts_half - function that print half of a string followed by new line.
 * @str: string going to be printed.
 * Return: void
 */
void puts_half(char *str)
{
int a;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		if ((a % 2) ==0)
		{
		_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
