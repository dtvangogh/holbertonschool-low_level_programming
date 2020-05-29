#include "hash_tables.h"

/**
*key_index-return index
*@key: key
*@size: size of array
*
*Return:index
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
