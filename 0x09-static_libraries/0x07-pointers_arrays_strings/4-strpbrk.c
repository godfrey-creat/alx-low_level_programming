#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to input string
 * @accept: pointer to string we are searching
 * Return: pointer to bytes in @s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	m = 0;
	while (s[m] != '\0')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (s[m] == accept[n])
				return (s + m);
			n++;
		}
		return ('\0');
	}
}
