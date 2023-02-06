#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned
 * int.
 * @b : points to a string of 0 & 1 chars.
 * Return: unsigned int with decimal value
 * of binary.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;

	n = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}
	return (n);
}
