#include "main.h"

/**
 * _string - function that prints
 * out put to stdout
 * @args: variadic arguments
 * @printed_values: print values
 */
void _string(va_list args, int printed_values)
{
	char *value = va_arg(args, char *);

	while (*value)
	{
		putchar(*value);
		printed_values++;
		value++;
	}
}
