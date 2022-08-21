#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - a function that create a new hash table
 * @size: size of array
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);
	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	newtable->size = size;
	return (newtable);
}
