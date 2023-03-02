#include "main.h"
/**
 * reverse_array - it is a function used to reverse a string.
 * @a: a is the array to be reversed.
 * @n: it is the number of elements in the array a.
 * Return: nothing (void)
 */
void reverse_array(int *a, int n)
{
int x, tmp;
	n = n - 1;
	for (x = 0 ; x <= n ;)
	{
	tmp = a[x];
	a[x++] = a[n];
	a[n--] = tmp;
	}
}
