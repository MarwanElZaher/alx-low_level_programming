#include "main.h"
/**
 * is_prime_number - function check if the input is prime num or not
 * @n: number to be checked.
 * Return: 1 if it is prime number else 0
 */
int is_prime_number(int n)
{
int checker = n / 2;

	if (n <= 1)
	{
	return (0);
	}
	return (is_prime(n, checker));
}
/**
* is_prime - returns the 1 if n is prime
* @n: number to be checked
* @checker: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n, int checker)
{
	if (checker <= 1)
		return (1);
	else if (n % checker == 0)
		return (0);
	return (is_prime(n, checker - 1));
}
