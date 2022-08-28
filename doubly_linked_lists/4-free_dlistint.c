#include "lists.h"

/**
* free_dlistint -  function that frees memory
* @head: pointer to head node
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}