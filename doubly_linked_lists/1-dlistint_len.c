#include "lists.h"
/**
 * dlistint_len - gets the number of nodes in a list
 * @h: singly linked list to print
 * Return: number of nodes on the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i;

for (i = 0; h; i++)
h = h->next;
return (i);
}
