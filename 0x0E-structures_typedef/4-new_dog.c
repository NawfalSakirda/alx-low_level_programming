#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int ln = 0;
	int lo = 0;

	dog_t *neo_dog;

	while (name[ln] != '\0')
		ln++;

	while (owner[lo] != '\0')
		lo++;

	neo_dog = malloc(sizeof(dog_t));
	if (neo_dog == 0)
		return (0);

	neo_dog->name = malloc(sizeof(char) * (ln + 1));
	if (neo_dog->name == 0)
	{
		free(neo_dog);
		return (0);
	}

	neo_dog->owner = malloc(sizeof(char) * (lo + 1));
	if (neo_dog->owner == 0)
	{
		free(neo_dog->name);
		free(neo_dog);
		return (0);
	}

	for (i = 0; i <= ln; i++)
		neo_dog->name[i] = name[i];

	neo_dog->age = age;

	for (i = 0; i <= lo; i++)
		neo_dog->owner[i] = owner[i];

	return (neo_dog);
}
