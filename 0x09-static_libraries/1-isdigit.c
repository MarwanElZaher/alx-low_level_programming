#include "main.h"
/**
 * _isdigit - function used to check if it is a digit or not
 * @c: the checked variable.
 * Return: 1 if c is a digit, 0 if it is not a digit.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}
return (0);
}

