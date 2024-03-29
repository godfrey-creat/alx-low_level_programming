#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int godfrey = 0, k;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[godfrey] != '\0')
		godfrey++;
	godfrey -= 1;
	k = 0;
	while (b[k])
	{
		if ((b[k] != '0') && (b[k] != '1'))/*&& logical AND operator*/
			return (non_binary);

		if (b[k] == '1')
			number += (1 * (1 << godfrey));/*<< bitwise left shift operator*/
		k++;

		godfrey--;
	}
	return (number);
}
