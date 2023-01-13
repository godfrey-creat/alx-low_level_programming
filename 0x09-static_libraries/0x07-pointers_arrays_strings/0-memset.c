#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s: input pointer
 * @b: input variable
 * @n: unsigned int variable
 * Return: pointer to filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/*declare an unsigned int because we are storing a non-negative value*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
