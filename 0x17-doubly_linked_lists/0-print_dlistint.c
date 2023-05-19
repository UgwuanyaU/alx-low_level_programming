#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * size_t print_dlistint - the number of nodes
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
    size_t count = 0;

    while (current != NULL)
    {
	    printf("%d\n", current->n); // Assuming 'n' is the data element in dlistint_t
	current = current->next;
	count++;
    }
    return count;
}
