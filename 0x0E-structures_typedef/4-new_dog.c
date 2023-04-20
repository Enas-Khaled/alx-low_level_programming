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
 * Description: This function creates a new dog struct with a copy of the name
 *              and owner strings. If the memory allocation fails, it returns
 *              NULL.
 *
 * Return: pointer to the new dog struct, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    /* Declare a pointer to a new dog struct */
    dog_t *new_dog_ptr;

    /* Calculate the length of the name string */
    int name_len = strlen(name) + 1;

    /* Calculate the length of the owner string */
    int owner_len = strlen(owner) + 1;

    /* Allocate memory for the new dog struct */
    new_dog_ptr = malloc(sizeof(dog_t));

    /* Check if the memory allocation succeeded */
    if (new_dog_ptr == NULL)
    {
        return NULL;
    }

    /* Allocate memory for the copy of the name string */
    new_dog_ptr->name = malloc(name_len);

    /* Check if the memory allocation succeeded */
    if (new_dog_ptr->name == NULL)
    {
        /* Free the memory allocated for the new dog struct */
        free(new_dog_ptr);

        return NULL;
    }

    /* Allocate memory for the copy of the owner string */
    new_dog_ptr->owner = malloc(owner_len);

    /* Check if the memory allocation succeeded */
    if (new_dog_ptr->owner == NULL)
    {
        /* Free the memory allocated for the name string */
        free(new_dog_ptr->name);

        /* Free the memory allocated for the new dog struct */
        free(new_dog_ptr);

        return NULL;
    }

    /* Copy the name and owner strings to the new dog struct */
    strncpy(new_dog_ptr->name, name, name_len);
    new_dog_ptr->age = age;
    strncpy(new_dog_ptr->owner, owner, owner_len);

    /* Return the pointer to the new dog struct */
    return new_dog_ptr;
}

