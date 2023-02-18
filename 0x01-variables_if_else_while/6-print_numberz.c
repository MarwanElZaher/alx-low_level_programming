#include<stdio.h>
/**
 * main - an app that print base 10 from zero using putcher
 * Return: Alwayes 0 means(success)
 */
int main(void)

{
	int a;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
printf("\n");
return (0);
}
