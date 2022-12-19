#include "main.h"
/**
 * _puts - prints a string
 * @str: input string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (count >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[len]);
		len++;
	}
}
