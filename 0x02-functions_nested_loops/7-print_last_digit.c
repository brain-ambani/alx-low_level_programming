#include <stdio.h>
/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @i: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int i)
{
	int l = i % 10;

	if (i < 0)
		i = -1;

	if (i < 0)
		l = -1;

	putchar(l + '0');

	return (1);
}
