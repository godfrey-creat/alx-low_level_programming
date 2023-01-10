#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments passed
 * @argc: size of *arrays
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
