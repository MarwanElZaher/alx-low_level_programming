#include <stdio.h>
/**
 * main - an app prints combination of 3 digits
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 2; c < 10; c++)
			{
				if (a == b || a == c || b == c || b < a || c < b)
					continue;

				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a == 7 && b == 8 && c == 9)
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
