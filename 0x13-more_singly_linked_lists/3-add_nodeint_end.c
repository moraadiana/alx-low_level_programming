#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of list
 * @head: A pointer to the address of the
 * head of the listint_t list
 * @n: The integer for the new node to contain.
 * Return: If the function fails - null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *last;

        i = malloc(sizeof(listint_t));
        if (i == NULL)
                return (NULL);

        i->n = n;
        i->next = NULL;

		if (*head == NULL)
		*head = i;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = i;
	}

	return (*head);
}
