#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning
 * of a list
 * @head: A pointer to the address of the
 * head of the list
 * @n: The integer for the new node to contain.
 * Return:the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = *head;

	*head = i;

	return (i);
}
