#include "lists.h"
/**
* add_nodeint - function
*@n: variable
*@head: pointer of pointer that first node
* Return: newNode
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	int num = n;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = num;
	newNode->next = *head;
	*head = newNode;
	return (newNode);

}
