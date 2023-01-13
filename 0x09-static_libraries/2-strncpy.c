#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination input
 * @src: source input
 * @n: bytes of @src
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	/**
	 * iterate through src array
	 * if there is no null byte among the first n bytes of src
	 * the string placed in dest will not be null terminated
	 */
	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	/**
	 * if length of source of source is less than n
	 * write additional null bytes to dest to
	 * ensure that a total of n bytes is written
	 */
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
