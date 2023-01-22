#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguements to be passed
 * Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	int sum = 0, int i = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, n);

	va_end(ap);
	return (sum);
}
