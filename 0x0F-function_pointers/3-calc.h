#ifndef _CALC_H
#define _CALC_H
/**
 * struct op - structure operator
 * @op: operator
 * @f: func associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}
op_t;
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /*_CALC_H*/
