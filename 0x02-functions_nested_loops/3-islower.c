#include <stdio.h>
/**
 *_islower -a function that checks for lower characters
 *@c: The charactersin ASCII code
 *
 * Return: 1 if int c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
