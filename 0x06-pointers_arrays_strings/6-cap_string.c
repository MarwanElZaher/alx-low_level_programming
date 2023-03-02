#include "main.h"
/**
 * cap_string - it is a function that set all words of a string to be cap
 * @s: s is the world to be in capital.
 * Return: always 0 (means success).
 */
char *cap_string(char *s)
{
int a;

	for (a = 0 ; s[a] != '\0' ;)
	{
		if (s[0] < 123 && s[0] > 98)
		{
			s[0] = s[0] - 32;
		}
		if (s[a] == 32 || s[a] == 46 || s[a] == '\t' ||
			s[a] == '\n' || s[a] == 44 || s[a] == 59 ||
				s[a] == '!' || s[a] == '?' || s[a] == '(' ||
				s[a] == ')' || s[a] == '{' || s[a] == '}')
		{
			if (s[a + 1] < 123 && s[a + 1] > 98)
			{
			s[a + 1] = s[a + 1] - 32;
			}
		}
a++;
	}
return (s);
}
