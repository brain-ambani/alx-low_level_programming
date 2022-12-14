#include <stdio.h>
/**
 * main - prints _putchar.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
