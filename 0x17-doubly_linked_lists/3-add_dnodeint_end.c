#include <stddef.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
{
	return NULL; // Return NULL if memory allocation fails
}
new_node->n = n; // Assuming 'n' is the data element in dlistint_t
new_node->next = NULL;
if (*head == NULL)
{
	new_node->prev = NULL;
	*head = new_node;
}
else
{
	dlistint_t *current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	new_node->prev = current;
	current->next = new_node;
}
return new_node;
}
