#include "lists.h"
/**
* pop_listint - function
*@head: first node
*
*/

int pop_listint(listint_t **head)
{
	listint_t *delNode;
	int data = 0;

	if (*head == NULL)
		return (0);

	delNode = *head;
	data = (*head)->n;
	*head = delNode->next;
	free(delNode);
	return (data);
}
