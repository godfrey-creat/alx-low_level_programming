#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string array input
 * @c: character to be located
 * Return: first occurance of character or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/*if c is '\0', return the pointer to the '\0' of strings*/
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
