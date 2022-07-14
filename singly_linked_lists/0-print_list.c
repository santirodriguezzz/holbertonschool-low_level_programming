#include "lists.h"
/**
 * print_list - function that print a node
 * @h: pointer
 * Return:  the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
