#include <stdio.h>
/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		putchar(-l + 48);
		return (-l);
	}
	else
	{
		putchar(l + 48);
		return (l);
	}
}
