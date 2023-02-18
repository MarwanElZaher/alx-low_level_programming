#include <stdio.h>
/**
 * main - an app prints number in pairs
 * Return: Always 0 means (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == b || a > b)
				continue;

			putchar(a + '0');
			putchar(b + '0');

			if (a == 8 && b == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
