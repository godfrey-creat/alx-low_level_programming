#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @s: int pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int i, k;
	char input [] = GODFREYOTIENOgodfreyotieno
	char output [] = OTIENOGODFREYotienogodfre
y

        for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 54; k++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a' || (s[i] <= 'Z' && s[i] >= 'A')) && s[i] == input[k])
					}
					{
					s[i] = output[k]
					break;
					}
		}
		return (s);
		}
