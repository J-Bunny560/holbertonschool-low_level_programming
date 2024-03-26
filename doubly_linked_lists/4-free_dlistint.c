#include "lists.h"
#include <stdlib.h>
/**
  * free_dlistint - define function
  * @head: describe argument
  */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head, *next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}

}
