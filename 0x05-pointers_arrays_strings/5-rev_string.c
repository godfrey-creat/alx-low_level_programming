#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string input
 * Return: 0
 */

void rev_string(char *s)
{
	int m, n;
	char ch;

	for (m = 0; s[m] != '\0'; ++m)
		;
	for (n = 0; n < 1 / 2; ++n)
	{
		ch = s[n];
		s[n] = s[m - 1 - n]; /* -1 because array starts from 0*/
		s[m - 1 - n] = ch;
	}
}
