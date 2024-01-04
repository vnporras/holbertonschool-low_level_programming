#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @key: is the key.
 * @ht:  is the hash table you want to look.
 * Return: the value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			return (aux->value);
		}
		aux = aux->next;
	}
	return (NULL);
}
