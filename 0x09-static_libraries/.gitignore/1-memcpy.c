#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: buffer to copy to
 * @src: what to copy
 * @n: bytes of @src
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
