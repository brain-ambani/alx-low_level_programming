#include "main.h"
/**
 * print_most_numbers - prints 0-9 skipping 2 and 4
 *
 * Return: 0-9 without 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
