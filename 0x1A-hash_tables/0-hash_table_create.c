#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: The size of the array
 * Return: a pointer to the newly created hashed table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
unsigned long int i = 0;

table = malloc(sizeof(hash_table_t));
if (size == 0)
return (NULL);

if (!table)
{
return (NULL);
}

table->array = malloc(sizeof(hash_node_t) * size);
if (!table->array)
{
free(table);
return (NULL);
}

while (i < size)
{
table->array[i] = NULL;
i++;
}


table->size = size;
return (table);
}
