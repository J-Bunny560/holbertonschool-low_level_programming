#include "lists.h"
#include <stdlib.h>
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * _strdup - recreation of string duplicate function
  * @src: source of string to duplicate
  * Return: pointer to malloc'd space with copied string
  */
void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * add_node_end - add new node to the end of list_t
 * @head: pointer to the pointer of beginning of list_t
 * @str: string to be added
 * Return: New node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *current;
	int a;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	if (*head == NULL)
		*head = add;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = add;
	}
	add->next = NULL;
	add->str = _strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		;
	add->len = a;
	return (add);
}
