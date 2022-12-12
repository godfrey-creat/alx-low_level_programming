#include <stdio.h>
/**
 * main - prints all different combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 38; n < 48; n++)
	{
		for (m = 39; m < 48; m++)
		{
			for (l = 40; l < 48; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);

					if (n != 45 || m != 46)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
