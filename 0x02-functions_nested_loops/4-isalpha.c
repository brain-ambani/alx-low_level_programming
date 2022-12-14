#include "main.h"
/**
 * _isalpha - a function thats checks for alphabetic characters
 *
 * @c: The characters in ASCII code
 * * Return: 1 for alphabet lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 96) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
