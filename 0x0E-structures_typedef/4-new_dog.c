#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: pointer to name string
 * @age: age of the dog
 * @owner: pointer to owner string
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	int name_len = strlen(name) + 1;

	int owner_len = strlen(owner) + 1;

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = malloc(name_len);

	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);

		return (NULL);
	}

	new_dog_ptr->owner = malloc(owner_len);

	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);

		free(new_dog_ptr);

		return (NULL);
	}

	strncpy(new_dog_ptr->name, name, name_len);
	new_dog_ptr->age = age;
	strncpy(new_dog_ptr->owner, owner, owner_len);


	return (new_dog_ptr);
}

