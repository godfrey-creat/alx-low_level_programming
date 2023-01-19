#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - func to print name
 * @name: name tag
 * @f: func pointer that doesnt return nothing
 * Return: 0
 */

void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
