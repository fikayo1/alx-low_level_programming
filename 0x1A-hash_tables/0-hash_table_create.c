#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: The size of the array
 * Return: a pointer to the newly created hashed table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table;
    hash_node_t **arr;
    unsigned long int i = 0;

    table = malloc(sizeof(hash_table_t));
    if (size == 0)
	    return (NULL);

    arr = malloc(sizeof(hash_node_t) * size);
    if (!arr)
    {
	free(table);
        return (NULL);
    }

    if (!table)
        return (NULL);

    while (i < size)
    {
        arr[i] = NULL;
	i++;
    }


    table -> size = size;
    table -> array = arr;
    return (table);
}
