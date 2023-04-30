#include "main.h"
/**
 * print_listint - (const listint_t *h);
 * @h: head
 * Return: pointer
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = malloc(sizeof(listint_t));

	ptr = h;
	while (ptr->next != NULL)
	{i
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	printf("%d\n", ptr->n)
	return (count + 1);
}
