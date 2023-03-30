#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @str: The string to be added to the new node.
 *
 * Return: If memory allocation fails or head is NULL, NULL.
 *         Otherwise, the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (new->str[len])
		len++;

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
