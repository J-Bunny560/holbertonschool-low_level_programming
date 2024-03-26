#include "lists.h"
#include <stdlib.h>
/**
  * sum_dlistint - sums all elements of a list
  * @head: pointer to the head of the list
  * Return: sum of all elements
  */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
