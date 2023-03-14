#include "main.h"
#include <stdlib.h>
/**
 * create_array - it is a function that create an array of chars
 * and initialize it with specific charachter.
 * @size: size of array of charachter.
 * @c: charachter to be printed
 * Return: null if size is equal zero or if it fails, pointer to array.
 */
char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int i;
	if (size == 0)
		{
		return (NULL);
		}

	pointer = malloc(sizeof(char) * size);
	if (pointer == NULL)
		{
		return (NULL);
		}
	for (i = 0 ; i < size ;)
	{
	*(pointer + i) = c;
	i++;
	}
	*(pointer + i) = '\n';
	return (pointer);
}
