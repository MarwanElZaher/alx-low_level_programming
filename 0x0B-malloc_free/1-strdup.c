#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be copied in the allocated memory.
 * Return:  a pointer to a newly allocated space in memory
 * NULL if str = NULL, NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
char *pointer;
int size;
int i;

	if (str == 0)
	return (NULL);
		for (size = 0 ; str[size] != '\0';)
			size++;

			pointer = (char *) malloc(sizeof(char) * size + 1);
				if (pointer == 0)
				{
				return (NULL);
				}
					for (i = 0 ; str[i] != '\0' ;)
						{
						*(pointer + i) = *(str + i);
							i++;
						}
							return (pointer);
}
