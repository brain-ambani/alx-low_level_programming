

#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, c = 0, n;
	char *ptr;

	const char form_arg[] = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		n = 0;
		while (form_arg[i])
		{
			if (format[i] == form_arg[n] && c)
			{
				printf(", ");
				break;
			} n++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), c = i;
				break;
			case 's':
				ptr = va_arg(list, char *);
				if (!ptr)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
		} i++;
	}
	printf("\n"), va_end(list);
}
