#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination input
 * @src: source input
 * @n: number of src bytes
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, i;

	m = 0;
	/*size of dest array*/
	while (dest[m])
		m++;
	/*src does not need to be null terminated if it contaims n or more bytes*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[m + i] = src[i];
	/*null terminating*/
	dest[m + i] = '\0';
	return (dest);
}
