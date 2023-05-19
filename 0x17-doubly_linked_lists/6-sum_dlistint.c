#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n; // Assuming 'n' is the data element in dlistint_t
		current = current->next;
	}
	return sum;
}
