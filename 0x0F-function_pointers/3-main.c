#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - program entry
 * Deacription: program that tajes 4 args
 * usage: ./calc num1 operator num2
 * @argc: argument counter
 * @argv: argumwnt vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]); /*if string convert it to number*/
	num2 = atoi(argv[3]);
	operator = argv[2];
	/*error if operator is not null or 2d array*/
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/*error if user try to divide /(47) or % (37) by 0*/
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
