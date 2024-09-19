
#include "lists.h"
#include "stdlib.h"
/**
 * delete_dnodeint_at_index - delete a node at given index
 * @head: head node
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i = 0;

	if (!head || !curr)
		return (-1);

	while (curr->prev)
		curr = curr->prev;

	while (curr)
	{
		if (i == index)
		{
			if (!curr->prev)
				curr->next->prev = NULL;
			else
				curr->next->prev = curr->prev;
			if (!curr->next)
				curr->prev->next = NULL;
			else
				curr->prev->next = curr->next;
			free(curr);
			return (1);
		}
		i++;
		curr = curr->next;
	}

	return (-1);
}
