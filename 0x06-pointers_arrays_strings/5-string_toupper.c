#include "main.h"
/**
 * string_toupper - changes all lowercase to uppcase
 * @ptr: input string
 * Return: pointer to destination
 */
char *string_toupper(char *ptr)
{
	int count = 0;

	while (*(ptr + count) != '\0')
	{
		if ((*(ptr + count) >= 97) && (*(ptr + count) <= 122))
			*(ptr + count) = *(ptr + count) - 32;
		count++;
	}

	return (ptr);
}
