#include <stdlib.h>
#include "function_pointers.h"
/*
 * print_name - is a function used to print a name
 * @name: is the name to be printed
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
