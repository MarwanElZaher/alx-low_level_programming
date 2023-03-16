#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0 ; *(string + i) != '\0' ;)
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to be added to string 1 from 2
 * Return: pointer to the new place allocated in memory
 * on fail return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, len, num;
char *p;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (j = 0 ; j < num ; j++)
	{
		*(p + i + j) = *(s2 + j);
	}
	*(p + i + j) = '\0';
		return (p);

}
