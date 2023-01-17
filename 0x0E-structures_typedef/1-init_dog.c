#include "dog.h"
/**
 * init_dog - initializes dog struct
 * @d: input pointer to dog struct
 * @name: input name of the dog
 * @owner: input for dog owner
 * @age: input for age of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d-> name = name; */
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
