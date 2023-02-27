#include "main.h"
/**
 *swap_int - function that swap the value of 2 int.
 * @a: first integer to be changed to b value.
 * @b: second integer to be changed to a value.
 * Return: void (nothing)
 */
void swap_int(int *a, int *b)
{
int s;

	s = *a;
	*a = *b;
	*b = s;
}
