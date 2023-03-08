#include "main.h"
/**
 * _pow_recursion - is a function that return
 * the value of x raised to the power of y.
 * @x: first input number
 * @y: second input number
 * Return: if y < 0, (-1) else 0;
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
		else if (y == 0)
			{
			return (1);
			}
				else
				{
				return (_pow_recursion(x, y - 1) * x);
				}
}
