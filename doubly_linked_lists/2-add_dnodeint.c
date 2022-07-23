#include "lists.h"

/**
*add_dnodeint - function that adds a new node at the beginning
*@head: pointer of pointer to first node
*@n: value
*Return: New Node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	int num = n;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = num;
	if (*head)
	{
		(*head)->prev = newNode;
		newNode->next = *head;
	}
	else
			newNode->next = NULL;
		*head = newNode;
	return (newNode);
}
