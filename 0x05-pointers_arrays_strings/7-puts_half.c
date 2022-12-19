#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: string input
 * Return: prints the second half of the string
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}
	if (len % 2 == 1)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for (i++; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
