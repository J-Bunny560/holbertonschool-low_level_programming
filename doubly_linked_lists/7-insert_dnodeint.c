#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list.
 * @h: Pointer to the head node of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be inserted in the new node.
 * Return: Pointer to the new node, or NULL if it failed to insert the node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;
unsigned int i;

if (idx == 0)
{
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = *h;

if (*h)
(*h)->prev = new_node;
*h = new_node;

return (new_node);
}

for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;

if (current == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->prev = current;
new_node->next = current->next;

if (current->next)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
