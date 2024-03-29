#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - get op func pointer of type char
 * that aacepts 2 inputs of int data type
 * @s: character pointer pointing to a symbol
 * Return: one of the operators
 */
int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
				i++;
	}
	return (NULL);
}
