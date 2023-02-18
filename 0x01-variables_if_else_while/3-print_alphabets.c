#include <stdio.h>

/**
 * main - an app that prints alphabets from a to z in lower and upper case
 * Return: 0 Always means(success)
 */
int main(void)
{
	char alphabet, alphabets;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);
	putchar('\n');

	return (0);
}
