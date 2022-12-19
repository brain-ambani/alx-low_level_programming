#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 * retun: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
