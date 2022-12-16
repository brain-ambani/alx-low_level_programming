#include "main.h"
/**
 * print_line - prints a horizontal line in the terminal
 *
 * @n: number of times '_' should be printed
 *
 * Return: a straight in the termonal
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
