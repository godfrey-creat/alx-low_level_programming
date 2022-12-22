#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 * Return: 0 if s1 amd s2 are equal
 * negative if stopping character in @s1 was less than in @s2
 * positive if stopping character in @s1 was greater than @s2
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0, l;

	/*iterate through src and compare with dest*/
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		/*if they differ by single character dont iterate further*/
		if (s1[k] != s2[k])
		{
			/*return the difference between the 2 characters*/
			l = s1[k] - s2[k];
			break;
		}
		else
		{
			l = s1[k] - s2[k];
		}
		k++;
	}
	return (l);
}
