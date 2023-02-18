#include <stdio.h>
#include <ctype.h>
/**
 * main - an app to print alphabets from a to z
 * Return: Always 0 (means success)
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{	alphabet = tolower(alphabet);
		putchar(alphabet);
	}
		putchar('\n');
	return (0);
}
