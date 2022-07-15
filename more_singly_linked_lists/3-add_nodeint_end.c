#include "lists.h"
/**
* add_nodeint_end - function taht add a new node at the end
*@head: firs node
*@n: value of node
*Return: newNode
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		if (*head == NULL)
			*head = newNode;
		else
		{
			while (lastNode->next != NULL)
				lastNode = lastNode->next;
			lastNode->next = newNode;
		}
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		free(newNode);
	return (newNode);
}
