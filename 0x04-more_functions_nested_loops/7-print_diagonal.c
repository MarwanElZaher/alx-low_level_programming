#include "main.h"
/**
 * print_diagonal - function that prints a diagonal.
 * @n: number of times the charachter would be printed.
 * Return: void
 */
void print_diagonal(int n)
{
int line, space;

		if (n > 0)
		{
			for (line = 0; line < n; line++)
			{
				if (line > 0)
				{
					for (space = 0; space < line; space++)
						_putchar(' ');
				}

				_putchar('\\');
				_putchar('\n');
			}
		}
		else
			_putchar('\n');
}
