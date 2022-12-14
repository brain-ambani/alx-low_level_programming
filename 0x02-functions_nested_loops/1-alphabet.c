#include <main.h>
/**
 * print_alphabet - a function that prints the alphabet, in lowercase.
 *
 * return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
