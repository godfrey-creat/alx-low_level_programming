#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initialize with specific char
 * @size: size of array to create
 * @c: char to initialize array
 * Return: array pointer on success, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *g;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	g = (char *)
		malloc(sizeof(char) * size);

	if (g == NULL)
		return (0);

	while (i < size)
	{
		*(g + i) = c;
		i++;
	}
	*(g + i) = '\0';
	return (g);
}
