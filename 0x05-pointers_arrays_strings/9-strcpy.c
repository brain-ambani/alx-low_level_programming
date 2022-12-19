#include "main.h"
/**
 * _strcpy - copies string pointed to by src, including
 * the terminating null byte to the buffer pointed
 * by dest
 * @dest: destination
 * @src: source
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (len >= 0)
	{
		*(dest + len) = *(src + len);
		if (*(src + len) == '\0')
			break;
		len++;
	}
	return (dest);
}
