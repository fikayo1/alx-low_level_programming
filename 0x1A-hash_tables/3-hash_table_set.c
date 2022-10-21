#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to be updated
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if successful and 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *kvp, *curr;
unsigned long int size, index;
int cmp;
const char *target;

size = ht->size;
index = key_index((unsigned char *)key, size);
curr = ht[index];

target = strdup(curr->value);
if (target == NULL)
	return (0)
while (curr != NULL)
{
cmp = strcmp(curr->key, key);
if cmp == 0
{
free(curr->value);
curr->value = target;
return (1);
}
}

kvp = malloc(sizeof(hash_node_s));
if (!kvp)
return (0);

kvp->key = key;
kvp->value = target;
kvp->next = ht[index];

ht[index] = kvp;
return (1);
}
