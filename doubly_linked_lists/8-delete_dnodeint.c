#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if the node was deleted successfully,
 * -1 if the index is out of bonds,or -1 if the list is empty
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;
for (i = 0; i < index; i++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}

if (index == 0)
*head = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
if (current->prev != NULL)
current->prev->next = current->next;

free(current);
return (1);
}
