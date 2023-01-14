#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @k: amount of byte
 * Return: pointer to a new allocated memory
 * exit with 98 if malloc fails
 */

void *malloc_checked(unsigned int k)
{
	void *new_mem;

	new_mem = malloc(k);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
