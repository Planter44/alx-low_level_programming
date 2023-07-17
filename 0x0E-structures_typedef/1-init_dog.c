#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -Initializes variable of type struct dog.
 * @d: Pointer to struct dog to initialize,
 * @name: name to initialize.
 * @age: age to initialize.
 * @owner:Owner to initialize.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
