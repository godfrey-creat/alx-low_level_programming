#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - function that gets the length of str
 * @str: string to check length
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * _strcopy - function that returns @dest with copy from @src
 * @src: string source
 * @dest: string destination
 * Return: @dest
 */
char *_strcopy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct pointer, NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/*if name and owner are empty and age < 0 return NULL*/
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)
		malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	{
		if ((*dog).owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
	}
}
