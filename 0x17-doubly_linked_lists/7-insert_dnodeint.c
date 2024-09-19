#include "lists.h"
#include "stdlib.h"
/**
 * insert_dnodeint_at_index - inserts a node at given index
 * @h: head node
 * @idx: index
 * @n: value to insert
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *curr = *h, *new = NULL, *next;

	if (!idx)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (curr->prev)
		curr = curr->prev;

	while (curr)
	{
		if (counter == idx)
		{
			if (!curr->next)
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (!new)
					return (NULL);

				new->n = n;
				next = curr->next;
				new->next = next;
				new->prev = curr;
				next->prev = new;
				curr->next = new;
				return (new);
			}
		}
		curr = curr->next;
		counter++;
	}
	return (NULL);
}