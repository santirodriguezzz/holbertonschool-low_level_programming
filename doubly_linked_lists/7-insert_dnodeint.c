#include "lists.h"
/**
* insert_dnodeint_at_index -  function that inserts a new node at a given position.
* @h: pointer to head node
* @idx: index of new node
* @n: contents of new node
* Return: address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	tmp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	newNode->next = tmp->next;
	newNode->prev = tmp;
	tmp->next = newNode;
	tmp = newNode->next;
	tmp->prev = newNode;
	return (newNode);
}
