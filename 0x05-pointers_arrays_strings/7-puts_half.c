#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string input
 * Return: 0
 */

void puts_half(char *str)
{
	int k, l;

	for (k = 0; str[k] != '\0'; ++k)
		;
	if (k % 2 == 0)
	{
		for (l = 1 / 2; str[l] != '\0'; ++l)
			_putchar(str[l]);
	}
	else
	{
		for (l = ((k - 1) / 2) + 1; str[l] != '\0'; ++l)
			_putchar(str[l]);
	}
	_putchar('\n');
}
