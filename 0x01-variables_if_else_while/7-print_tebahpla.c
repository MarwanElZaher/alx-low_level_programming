#include<stdio.h>
/**
 * main - an app that print lowercase alphabet using putcher
 * Return: Alwayes 0 means(success)
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	putchar(alphabet);
putchar('\n');
return (0);
}
