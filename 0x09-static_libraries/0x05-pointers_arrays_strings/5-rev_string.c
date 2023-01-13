#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string input
 * Return: 0
 */

void rev_string(char *s)
{
	int m, n, half;
	char ch;

	for (m = 0; s[m] != '\0'; ++m)
		;
	n = 0;
	half = m / 2;

	while (half--)
	{
		ch = s[m - n - 1];
		s[n] = s[m - 1 - n]; /* -1 because array starts from 0*/
		s[n] = ch;
		n++;
	}
}
