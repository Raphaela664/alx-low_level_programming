#include "main.h"
/**
 * _realloc - Reallocates a space in memory
 * @ptr: The pointer with allocated size in memory
 * @old_size: Current allocated size
 * @new_size: The new size to realloc
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str1, *ptr1;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		str1 = malloc(new_size);
		if (str1 == NULL)
			return (NULL);
		return (str1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str1 = malloc(new_size);
	if (str1 == 0)
		return (NULL);
	ptr1 = ptr;

	while (i < old_size)
	{
		str1[i] = ptr1[i];
		i++;
	}

	free(ptr);
	return (str1);
}
