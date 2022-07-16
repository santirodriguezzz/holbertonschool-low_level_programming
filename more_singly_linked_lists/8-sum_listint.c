#include "lists.h"
/**
* sum_listint - funccion
*@head: first node
*Return: count
*/

int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
