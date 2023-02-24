#include <stdio.h>
/**
 * main - an app that print fizz -buzz game
 * Return: always 0 (means success)
 */
int main(void)
{
int counter, three, five;

	for (counter = 1; counter <= 100; counter++)
	{
		three = counter % 3;
		five = counter % 5;

		if (three == 0 && five == 0)
		{
			printf("FizzBuzz ");
			continue;
		}

		if (three == 0)
		{
			printf("Fizz ");
			continue;
		}

		if (five == 0)
		{
			if (counter == 100)
			{
				printf("Buzz");
				continue;
			}

			printf("Buzz ");
			continue;
		}

		printf("%d ", counter);
	}

	printf("\n");
return (0);
}
