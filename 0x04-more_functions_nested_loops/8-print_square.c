#include "main.h"
/**
 * print_square - function to print square
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
			_putchar('#');
			}
		_putchar('\n');

		}


	}
	else
		_putchar('\n');
}
