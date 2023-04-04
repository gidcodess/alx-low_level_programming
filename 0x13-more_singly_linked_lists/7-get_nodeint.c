#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned, starting from 0
 *
 * Return: pointer to the nth node of the list or
 * NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; node && i < index; i++)
		node = node->next;

	return (node ? node : NULL);
}
