#include "main.h"
/**
 * power_operate - returns the natural square root of a number
 * @n: input number
 * @b: iterator
 * Return: square root of -1
 */

int power_operate(int n, int b)
{
	if (b % (n / b) == 0)
	{
		if (b * (n / b) == n)
			return (b);
		else
			return (-1);
	}
	return (0 + power_operate(n, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operate(n, 2));
}
