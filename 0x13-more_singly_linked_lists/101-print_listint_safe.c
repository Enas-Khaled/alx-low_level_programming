#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
        size_t count = 0;
        const listint_t *current;

        if (head == NULL)
                exit(98);

        current = head;
        while (current != NULL)
        {
                printf("[%p] %d\n", (void *)current, current->n);
                count++;
                /* Move the pointer to the next node */
                current = current->next;
                /* If we reached the original head again, we are in a loop */
                if (current == head)
                {
                        printf("-> [%p] %d\n", (void *)current, current->n);
                        break;
                }
        }
        return (count);
}
