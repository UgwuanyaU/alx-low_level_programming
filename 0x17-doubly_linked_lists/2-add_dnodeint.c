#include <stddef.h>
#include <stdlib.h>
/**
 * main - Write a function that adds a new node at the beginning
 *
 * Return: Always EXIT_SUCCESS.
 *
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }
    
    new_node->n = n; // Assuming 'n' is the data element in dlistint_t
    new_node->prev = NULL;
    new_node->next = *head;
    
    if (*head != NULL) {
        (*head)->prev = new_node;
    }
    
    *head = new_node;
    
    return new_node;
}
