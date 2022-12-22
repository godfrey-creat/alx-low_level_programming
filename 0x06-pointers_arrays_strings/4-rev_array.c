#include "main.h"
/**
 * reverse_array - reverse content of array of integer
 * @a: pointer to int array
 * @n: number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, m, p;

	m = 0;
	p = n - 1;
	while (m < p)
	{
		temp = a[m];
		a[m] = a[p];
		a[p] = temp;
		m++;
		p--;
	}
}
