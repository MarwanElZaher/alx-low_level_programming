#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 means success, 1 if argc not equal 1
 */
int main(int argc, char **argv)
{
	int j, result, cent;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < '0')
	{
	printf("0\n");
	return (0);
	}
	for (j = 0; j < 5 && cent >= 0; j++)
		{
			while (cent >= coins[j])
			{
				result++;
				cent = cent - coins[j];
			}
		}
printf("%d\n", result);
return (0);
}
