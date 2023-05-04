#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 *         If the function fails, exit the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
        size_t count = 0;
        const listint_t *current = head;
        const listint_t **visited = NULL;
        size_t visited_size = 0;

        while (current != NULL)
        {
                size_t i;

                /* Check if current node has been visited before */
                for (i = 0; i < visited_size; i++)
                {
                        if (current == visited[i])
                        {
                                printf("-> [%p] %d\n", (void *)current, current->n);
                                return count;
                        }
                }

                /* Add current node to visited nodes */
                visited = realloc(visited, sizeof(*visited) * (visited_size + 1));
                if (visited == NULL)
                {
                        perror("realloc");
                        exit(98);
                }
                visited[visited_size++] = current;

                /* Print current node */
                printf("[%p] %d\n", (void *)current, current->n);
                count++;

                /* Move to next node */
                current = current->next;
        }

        return count;
}

