#ifndef LIST_H
#define LIST_H

#include <stdio.h>

/**
 * struct list_t - singly linked list type
 * @str: node value
 * @len: node value length
 * @next: next node
 */

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
