#include "main.h"
/**
 * leet - Encodes a string in leet
 *
 * @str: String to be encoded
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int a, b;
	char Sa[] = "aAeEoOtTlL";
	char Sb[] = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (Sa[b] == str[a])
			{
				str[a] = Sb[b];
			}
		}
	}
	return (str);
}
