#include "main.h"
/**
 * times_table - shows the time table of 9
 * Return: always 0
 */
void times_table(void)
{
int a, b, m;
	for (a = 0 ; a < 10 ; a++)
		{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1 ; b < 10; b++)
	{
			m = ( a * b);
		if ((m / 10) + '0')
		{
			_putchar((m / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
			_putchar((m % 10) + '0');
		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

		}

}
