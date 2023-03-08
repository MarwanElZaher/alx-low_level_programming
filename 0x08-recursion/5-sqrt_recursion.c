#include "main.h"
/**
 * _sqrt_recursion - a function that return natural square root of a number.
 * @n: input number to get square root of it.
 * Return: if n doesn't have natural sqrt return -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
	return (n);
	}
		else
		{
		return (checker_sqrt(0, n));
		}
}
/**
 * checker_sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */

int checker_sqrt(int n, int x)
{
	if (n > x / 2)
	{
	return (-1);
	}
			else if (n * n == x)
			{
			return (n);
			}
				else
				{
				return (checker_sqrt(n + 1, x));
				}
}
