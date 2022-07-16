#include "lists.h"
/**
* free_listint - function
*@head: first node
*
*/

void free_listint(listint_t *head)
{
	listint_t *freeM;

	if (!head)
	{
		free(head);
		return;
	}
	for (freeM = head; freeM->next;)
	{
		free(freeM);
		freeM = freeM->next;
	}
	free(freeM);
}
