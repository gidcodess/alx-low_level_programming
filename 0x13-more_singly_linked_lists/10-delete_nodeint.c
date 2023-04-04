#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index of a
 * listint_t linked list
 * @head: Double pointer to the head of the linked list
 * @index: Index of the node to delete
 *
 * Return: 1 if successful -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = (*head)->next;
	for (i = 1; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (i != index || current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
