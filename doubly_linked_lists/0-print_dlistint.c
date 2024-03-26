#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlist_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
