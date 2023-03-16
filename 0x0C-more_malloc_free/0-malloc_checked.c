#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function used to allocate memory using malloc
 * @b: number of bytes to be allocated in to memory.
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
