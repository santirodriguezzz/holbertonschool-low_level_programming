#include "lists.h"

/**
*add_dnodeint - function that adds a new node at the beginning
*@head: pointer of pointer that first node
*@n: variable
*Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	int num = n;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = num;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
