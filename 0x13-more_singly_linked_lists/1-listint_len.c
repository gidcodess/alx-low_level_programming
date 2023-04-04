#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
