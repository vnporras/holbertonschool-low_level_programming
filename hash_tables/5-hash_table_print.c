#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table.
 * Return: the value.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", aux->key, aux->value);
			flag = 1;
			aux = aux->next;
		}
	}
	printf("}\n");
}
