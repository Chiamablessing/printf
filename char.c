#include "main.h"

/**
 * _char - function that prints
 * out put to stdout
 * @args: variadic arguments
 * @printed_values: printed values
 */
void _char(va_list args, int printed_values)
{
	int value = va_arg(args, int);

	putchar(value);
	printed_values++;

}
