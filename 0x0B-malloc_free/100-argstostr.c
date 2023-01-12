#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *argstostr - conatenates all the arguments of program
 * @ac: argument counter
 * @av: argument host
 * Return: pointer to new string on success, NULL on error
 */

char *argstostr(int ac, char **av)
{
	int m, n, l, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*to find the length of vector to make it 2d array*/
	length = 0;
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
			length++;
		length++;
	}
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	l = 0;
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
		{
			str[l] = av[m][n];
			l++;
		}
		str[l] = '\n';
		return (str);
	}
}

