#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to pointer to head of the list
 *
 * Return: data that stored in the head node that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
