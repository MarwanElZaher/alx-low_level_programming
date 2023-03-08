#include "main.h"
/**
 * factorial - function that return the factorial of a number.
 * @n: the given number to find its factorial
 * Return: if n < 0, return -1 else factorial of the number.
 */
int factorial(int n)
{
int nextfact;

	if (n < 0)
	{
	return (-1);
	}
		if (n == 0)
		{
		return (1);
		}
			else
			nextfact = factorial(n - 1);
return (n * nextfact);
}
