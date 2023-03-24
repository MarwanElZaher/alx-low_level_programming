#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters to be summed
 * Return: the result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
	sum = sum + va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
