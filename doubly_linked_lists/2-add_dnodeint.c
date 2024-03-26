#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add new nodes to the list
 * @head: current place in the list
 * @n: int to add to the list
 * Return: pointer to current position on list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

 new = malloc(sizeof(dlistint_t));
 if (new == NULL)
   return (NULL);

 new->n = n;
 new->next = *head;
 new->prev = NULL;
 if (*head != NULL)
   (*head)->prev = new;

 *head = new;
 return (new);
}
