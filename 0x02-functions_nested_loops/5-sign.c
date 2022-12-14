#include <stdio.h>
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: 1 prints '+' when n>0, '0' when n=0, '-1' when n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar ('+');/*putchar(43) apply wen using ASCII code */
		return (1);
	}
	else if (n == 0)
	{
		putchar ('0');/*putchar(48) apply when using ASCII code */
		return (0);
	}
	else
	{
		putchar('-'); /*putchar(45) apply this when using  ASCII code*/
		return (-1);
	}
