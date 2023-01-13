#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1
 * On error, -1 is required
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
