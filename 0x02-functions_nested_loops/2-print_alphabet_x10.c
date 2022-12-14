#include <stdio.h>

/**
 * print_alphabet_x10 - function prints the alphabet 10 times in lower case.
 *
 *Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
