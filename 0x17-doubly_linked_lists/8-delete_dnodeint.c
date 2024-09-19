
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
			if (i == 0)
			{
				*head = curr->next;
				if (!*head)
					(*head)->prev = NULL;
			}
			else
			{
				curr->prev->next = curr->next;
				curr->next->prev = curr->prev;
			}
			free(curr);
			return (1);
		}
		i++;
		curr = curr->next;
	}

	return (-1);
}
