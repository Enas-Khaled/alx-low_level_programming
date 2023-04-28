#include "main.h"
/**
 * _calloc - Allocates memory for an array using calloc.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in the array.
 *
 * Return: A pointer to the allocated memory, or NULL if the function fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(size, nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
