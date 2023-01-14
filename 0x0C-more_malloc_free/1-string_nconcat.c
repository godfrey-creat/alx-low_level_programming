#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function to concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: byte of s2 to add to s1
 * Return: new string or NULL on error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k1, k2, m, l;
	char *str;

	/*make NULL as empty string*/
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	k1 = k2 = 0;
	while (s1[k1] != '\0')
		k1++;
	while (s2[k2] != '\0')
		k2++;
	/*setting n to length of s2 */
	if (n >= k2)
		n = k2;
	str = (char *) malloc((k1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	/*adding s1 to str*/
	for (m = 0; s1[m] != '\0'; m++)
		str[m] = s1[m];
	/*adding s2 n bytes to str*/
	for (l = 0; l < n && s2[l] != '\0'; l++)
	{
		str[m] = s2[l];
		l++;
	}
	str[m] = '\0';
	return (str);
}
