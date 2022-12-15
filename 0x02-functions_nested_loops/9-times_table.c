#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: no return
 */

void times_table(void)
{
	int l, m, n;

	for (l = 0; l <= 9; l++)
	{
		_putchar(48);

		for (m = 1; m <= 9; m++)
		{
			n = l * m;
			_putchar(44);
			_putchar(32);

			if (n <= 9)
			{
				_putchar(32);
				_putchar(n + 48);
			}
			else
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
