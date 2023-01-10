#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: source input
 * @dest: destination input
 * Return: resulting @dest
 */

char *_strcat(char *dest, char *src)
{
	int a, a2;

	a = 0;
	/*find size of dest array*/
	while (dest[a])
		a++;
	/*iterate through each src array without null byte*/
	for (a2 = 0; src[a2]; a2++)
		/*append src[a2] to dest [a] while overwriting the null byte im dest*/
		dest[a++] = src[a2];
	return (dest);
}
