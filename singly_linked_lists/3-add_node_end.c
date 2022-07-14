#include "lists.h"
/**
 * add_node_end - function
 * @head: first node
 * @str: string
 * Return: newNode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode = *head;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (lastNode->next)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	return (newNode);
}
