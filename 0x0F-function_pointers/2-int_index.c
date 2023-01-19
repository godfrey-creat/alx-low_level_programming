#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - func that searches an integer
 * @array: pointer to array
 * @size: number of elements
 * @cmp: pointer to func call to check index in array
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool g;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (index = 0; index < size; index++)
		{
			g = cmp(array[index]);
			if (g == TRUE)
				return (index);
		}
	}
	return (-1);
}
