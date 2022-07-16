#include "lists.h"
/**
*get_nodeint_at_index - function
*@head: first node
*@index:end node
*Return: head
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int til;

	for (til = 0; til < index; til++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
