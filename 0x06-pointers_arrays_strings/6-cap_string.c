#include "main.h"
/**
 * cap_string - it is a function that set all words of a string to be cap
 * @s: s is the world to be in capital.
 * Return: always 0 (means success).
 */
char *cap_string(char *s)
{
int length = 0;
int x;
char separ[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			'"', '(', ')', '{', '}'};

	for (; s[length] != '\0'; length++)
	{
		if (length == 0 && s[length] >= 97 && s[length] <= 122)
			s[length] = s[length] - 32;

		for (x = 0; x < 13; x++)
			if (s[length] == separ[x])
				if (s[length + 1] >= 97 && s[length + 1] <= 122)
					s[length + 1] = s[length + 1] - 32;
	}
return (s);
}
