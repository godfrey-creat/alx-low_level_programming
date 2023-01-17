#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints dog
 * @d: pointer to struct dog
 * Return: nothing
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ?
			printf("(nil)\n") :
		printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("owner: ");
		d->owner == NULL ?
			printf("(nil)\n") :
			printf("%s\n", d->owner);
	}
}

