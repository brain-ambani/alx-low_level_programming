#include <stdio.h>
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * r = row, c = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (r * c);
			if ((d / 10) > 0)
			{
				putchar((d / 10) + '0');
			}
			else
			{
				putchar(' ');
			}
			putchar((d % 10) + '0');

			if (c < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

}
