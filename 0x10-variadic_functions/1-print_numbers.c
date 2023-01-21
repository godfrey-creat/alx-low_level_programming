#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - func that print numbers followed by new line
 * @separator: pointer to const separator
 * @n: start of input variables
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list go;
	unsigned int points;

	/*initialize the arguments list from the start*/
	va_start(go, n);
	/*iterate through each argument*/
	for (points = 0; points < n; points++)
	{
		/*print next argument*/
		printf("%d", va_arg(go, int));
		/*print separator between arguments*/
		if (separator && points != n - 1)
			printf("%s", separator);
	}
	/*cleaning up*/
	va_end(go);
	printf("\n");
}
