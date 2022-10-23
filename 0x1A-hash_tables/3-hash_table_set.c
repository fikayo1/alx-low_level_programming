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
char *target, *new_key;

if (key == NULL || ht == NULL || value == NULL || key[0] == '\0')
	return (0);
size = ht->size;
index = key_index((unsigned char *)key, size);
curr = ht->array[index];

new_key = strdup(key);
if (new_key == NULL)
	return (0);
target = strdup(value);
if (target == NULL)
	return (0);
while (curr != NULL)
{
cmp = strcmp(curr->key, key);
if (cmp == 0)
{
free(curr->value);
curr->value = target;
return (1);
}
curr = curr->next;
}

kvp = malloc(sizeof(hash_node_t));
if (!kvp)
	return (0);

kvp->key = new_key;
kvp->value = target;
kvp->next = ht->array[index];

ht->array[index] = kvp;
return (1);
}
