#include <stdio.h>

/**
 * main - an app that prints alphabet, without q and e in a lower case
 * Return: Always 0 means (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
