#include "main.h"
/**
 * _strcmp - it is a function used to compare two strings.
 * @s1: string 1 to be compared with string number 2.
 * @s2: string 2 to be compared with string number 1.
 * Return: always 0 (means success).
 */
int _strcmp(char *s1, char *s2)
{
int a;

	for (a = 0 ; s1[a] != '\0' && s1[a] == s2[a] ;)
	{
	a++;
	}
return (s1[a] - s2[a]);
}
