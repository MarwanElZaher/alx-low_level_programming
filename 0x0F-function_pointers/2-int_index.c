#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: given array
 * @size: size of an array
 * @cmp: pointer to function to be used to compare values
 * Return: number of int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (; i < size ; i++)
	{
		if (cmp(*(array + i)) == 1)
			return (i);
	}
return (-1);
}
