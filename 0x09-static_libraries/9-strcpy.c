#include "main.h"
/**
 * _strcpy - copies a string
 * @src: source of string
 * @dest: destination of string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int m, n = 0;

	for (m = 0; src[m] != '\0'; ++m)
	{
		dest[n] = src[m];
		++n;
	}
	dest[n] = '\0';

	return (dest);
}
