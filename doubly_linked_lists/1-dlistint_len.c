#include "lists.h"

/**
*dlistint_len - function that returns number of elements
*@h: first node
*Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
