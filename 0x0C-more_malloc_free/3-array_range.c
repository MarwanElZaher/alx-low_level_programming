#include "main.h"
#include <stdlib.h>
/**
 * array_range - function used to create an array of int
 * @min: value of the first array
 * @max: value of the second array
 * Return: pointer to the newly created array
 * If min > max or If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
