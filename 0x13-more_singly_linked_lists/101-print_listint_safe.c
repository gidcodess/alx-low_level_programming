#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head, *tortoise = head, *hare = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		count++;

		if (hare && hare->next)
		{
			hare = hare->next->next;
			tortoise = tortoise->next;

			if (hare == tortoise)
			{
				printf("-> [%p] %d\n", (void *)hare, hare->n);
				break;
			}
		}
	}

	if (!temp)
		return (count);

	temp = temp->next;
	count++;

	while (temp != hare)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		count++;
	}

	printf("-> [%p] %d\n", (void *)hare, hare->n);
	return (count);
}
