#include "main.h"
/**
 * _isupper - check for upper case
 * @c: is the value that will contain the checked letter.
 * Return: 1 if c is an upper case, 0 if lower case (otherwise).
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
	return (1);
	}
return (0);
}
