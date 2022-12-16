#include "main.h"
/**
 * print_square - prints a square
 *
 * @size:  the size of the square
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
			for (y = 2; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
