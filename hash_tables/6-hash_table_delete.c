#include "hash_tables.h"
/**
 * hash_table_delete - function that delete a hash table.
 * @ht: is the hash table.
 * Return: the value.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nwNode;
	hash_node_t *aux;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		nwNode = ht->array[i];
		while (nwNode != NULL)
		{
			aux = nwNode->next;
			free(nwNode->key);
			free(nwNode->value);
			free(nwNode);
			nwNode = aux;
		}
	}
	free(ht->array);
	free(ht);
}
