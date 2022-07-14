#include "lists.h"
/**
 * free_list - function to free list
 *@head: first node
 */
void free_list(list_t *head)
{
	list_t *freeM;

	while ((freeM = head))
	{
		if (freeM->str)
			free(freeM->str);
		head = head->next;
		free(freeM);
	}
}
