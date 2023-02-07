#include "hash_tables.h"
/**
 * shash_table_delete - delete given hash table
 * @ht: the sorted hash table given
 */
void shash_table_delete(shash_table_t *ht)
{
unsigned long int i = 0;
shash_node_t *node;
while (i < ht->size)
{
while (ht->array[i] != NULL)
{
node = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = node;
}
i++;
}
free(ht->array);
free(ht);
}

