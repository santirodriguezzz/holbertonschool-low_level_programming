#include "lists.h"
/**
* print_listint - function that print all elements of a list
* @h: pointer to node
* Return: count is number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
