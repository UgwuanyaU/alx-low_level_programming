#include <stddef.h>
#include <stdlib.h>

/**
 * void free - Write a function that frees a dlistint_t list.
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;
		free(current);
		current = next;
	}
}
