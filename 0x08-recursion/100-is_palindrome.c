#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compares each character of string
 * @s: string
 * @k1: smallest iterator
 * @k2: largest iterator
 * Return: .
 */

int comparator(char *s, int k1, int k2)
{
	if (*(s + k1) == *(s + k2))
	{
		if (k1 == k2 || k1 == k2 + 1)
			return (1);
		return (0 + comparator(s, k1 + 1, k2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects a string is palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 if it is not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
