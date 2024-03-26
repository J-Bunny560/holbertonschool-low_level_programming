#include "lists.h"
#include <stdlib.h>
/**
  * *get_dnodeint_at_index - gets the nth node of the list
  * @head: head of the list
  * @index: which node to stop at
  * Return: pointer to the nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;

while (current != NULL)
{
if (i == index)
return (current);
current = current->next;
i++;
}

return (NULL);
}
