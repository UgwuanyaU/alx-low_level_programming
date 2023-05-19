#include <stddef.h>
#include <stdlib.h>
/**
 * int delete - function that deletes the node at index index of a dlistint_t linked list
 *
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
	if (*head == NULL)
		return -1; // Return -1 if the list is empty

	dlistint_t *current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return 1; // Return 1 to indicate success
	}

	for (unsigned int i = 0; current != NULL && i < index; i++)
		current = current->next;
	
	if (current == NULL)
		return -1; // Return -1 if the index is out of bounds
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return 1; // Return 1 to indicate success
}
