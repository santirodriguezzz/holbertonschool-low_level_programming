#include "lists.h"
/**
* listint_len - function taht  return number of elements
* @h: list
* Return: numbers of elements
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
