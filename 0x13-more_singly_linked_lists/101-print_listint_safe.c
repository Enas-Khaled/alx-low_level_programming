#include "lists.h"
/**
 * print_listint_safe - (const listint_t *head);
 * @head: head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
