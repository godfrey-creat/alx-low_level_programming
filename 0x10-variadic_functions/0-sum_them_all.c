#include <stdarg.h>
/**
 * sum_them_all - adds all parameters
 * @n: start of input variable
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list go;
	unsigned int chel, sum = 0;

	/*initialize the argument list*/
	va_start(go, n);
	/*interate through all parameters*/
	for (chel = 0; chel < n; chel++)
		/*getting next parameter value then adding to sum*/
		sum += va_arg(go, int);
	/*do the clean up*/
	va_end(go);
	return (sum);
}
