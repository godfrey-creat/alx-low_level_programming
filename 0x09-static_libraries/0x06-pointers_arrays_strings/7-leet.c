#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string input
 * Return: @s
 */

char *leet(char *s)
{
	int i, b = 0;
	int s1[] = {97, 101, 111, 116, 108};
	int f1[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array*/
	while (s[b] != '\0')
	{
		/*loop through array 5 times to check if the value*/
		for (i = 0; i < 5; i++)
		{
			if (s[b] == s1[i] || s[b] == f1[i])
			{
				s[b] = n[i];
				break;
			}
		}
		b++;
	}
	return (s);
}
