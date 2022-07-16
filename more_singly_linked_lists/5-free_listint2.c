#include "lists.h"
/**
* free_listint2 - function
*@head: first node
*
*/

void free_listint2(listint_t **head)
{
	listint_t *freeNode;

	if (!head)
		return;
	while (*head)
	{
		freeNode = (*head);
		*head = (*head)->next;
		free(freeNode);
	}
	head = NULL;
}
