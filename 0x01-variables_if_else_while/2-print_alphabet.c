#include <stdio.h>
#include <ctype.h>
/**
 *main - It is a program that print alphabet letter followed by new line
 *
 *Return: Always 0 (means succes)
 */
int main(void)
{
	int letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	letter = tolower(letter);
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
