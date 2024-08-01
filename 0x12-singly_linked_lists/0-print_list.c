#include "list.h"
/**
 * print_list - prints a list
 * @h: list pointer
 * Return: list length
 */

size_t print_list(const list *h)
{
	size_t len = 0;

	while (h)
	{
		if (!h->str)
			h->str == "(nil)";

		printf("[%d] %s\n", h->len, h->str);

		len++;
		h = h->next;
	}

	return (len);
}
