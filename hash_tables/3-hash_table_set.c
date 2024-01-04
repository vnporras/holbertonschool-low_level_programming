#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @key: is the key.
 * @ht: is the hash table you want to add or update the key/value.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *valueCopy;
	char *keyCopy;
	hash_node_t *newNode;
	hash_node_t *aux;


	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	valueCopy = strdup(value);
	if (valueCopy == NULL)
	{
		return (0);
	}
	keyCopy = strdup(key);
	if (keyCopy == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, keyCopy) == 0)
		{
			free(aux->value);
			aux->value = valueCopy;
			return (1);
		}
		aux = aux->next;
	}
	newNode = malloc(sizeof(hash_node_t) * 1);
	if (newNode == NULL)
	{
		return (0);
	}
	newNode->key = keyCopy;
	newNode->value = valueCopy;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
