#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and print + if n is greater than 0
 * 0 and print 0 if n is zero
 * -1 and print - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(45);

		return (1);
	}
	else if (n < 0)
	{
		_putchar(48);

		return (-1);
	}
	else
	{
		_putchar(51);

		return (-0);
	}
	_putchar('\n');
}



