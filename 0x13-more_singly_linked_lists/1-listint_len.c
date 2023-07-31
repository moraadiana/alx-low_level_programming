#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * in a linked list.
 * @h: A pointer to the head of the listint_t list.
 * @x: nodes
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
