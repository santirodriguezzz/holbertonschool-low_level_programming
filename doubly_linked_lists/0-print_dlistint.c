#include "lists.h"
/**
*print_dlistint - function that shows number of nodes
*@h: firs node
*Return: numberof nodes
*/
size_t print_dlistint(const dlistint_t *h)
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
