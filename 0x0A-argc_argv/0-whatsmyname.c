#include <stdio.h>
#include "main.h"
/**
 * main - prints its name followed by a new line
 * @argc: number of command line arguments
 * @argv: array containing program command line argument
 * Return:Always 0 (success)
 */

int main(int argc, __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv);

	return (0);
}
