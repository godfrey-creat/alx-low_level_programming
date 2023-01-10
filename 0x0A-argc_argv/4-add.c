#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: no of command line arguments
 * @argv: array containing command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k, l, add = 0;

	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l] != '\0'; l++)
		{
			if (!isdigit(argv[k][l]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[k]);
	}
	printf("%d\n", add);
	return (0);
}
