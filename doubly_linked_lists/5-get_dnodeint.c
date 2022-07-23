#include "lists.h"
/**
* get_dnodeint_at_index - function that returns the nth node
* @head: pointer to head node
* @index: node to return
* Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
		head = head->next;
	return (head);
}
