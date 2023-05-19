#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * size_t  - Write a function that returns the number of elements in a linked dlistint_t list.
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
    size_t count = 0;
    while (current != NULL)
    {
	    count++;
	current = current->next;
    }
    return count;
}
