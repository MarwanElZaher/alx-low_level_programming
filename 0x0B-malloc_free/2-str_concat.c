#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to the new allocated space containing s1 and s2
 * return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
int lengths1;
int lengths2;
char *pointer;
int i, j;

	if (s1 == NULL)
		{
		s1 = '\0';
		}
		else if (s2 == NULL)
			{
			s2 = '\0';
			}
	for (lengths1 = 0 ; s1[lengths1] != '\0' ;)
		lengths1++;
	for (lengths2 = 0 ; s2[lengths2] != '\0' ;)
		lengths2++;
	pointer = malloc(sizeof(char) * (lengths1 + lengths2 + 1));
	if (pointer == NULL)
		return (NULL);
			for (i = 0 ; s1[i] != '\0' ;)
				{
				*(pointer + i) = *(s1 + i);
				i++;
				}
			for (j = 0 ; s2[j] != '\0' ;)
				{
				*(pointer + i) = *(s2 + j);
					i++;
					j++;
				}
				*(pointer + i) = '\0';
				return (pointer);
}

