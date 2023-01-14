#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: imput that rep memory
 * @n: number of bytes to be filled
 * @b: character to fill
 * Return: pointer to filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

	/**
	 * _calloc - function that allocates memory for an array using malloc
	 * @nmemb: size of array
	 * @size: size of each element
	 * Return: pointer with new allocated memory, NULL on error
	 */

	void *_calloc(unsigned int nmemb, unsigned int size)
	{
		char *p;

		if (nmemb == 0 || size == 0)
			return (NULL);
		p = malloc(nmemb * size);
		if (p == NULL)
			return (NULL);
		_memset(p, 0, nmemb * size);
		return (p);
	}
}
