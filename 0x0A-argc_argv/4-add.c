#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum, num, digit;

	sum = 0;
	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[num][digit]))
			{
				printf("Error");
				return (1);
			}
		}
		sum += atoi(argv[num]);
		{
			printf("%d\n", sum);
			return (0);
		}
	}
}
