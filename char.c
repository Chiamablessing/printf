#include "main.h"

/**
 * _char - function that prints
 * out put to stdout
 * @args: variadic arguments
 * @printed_values: printed values
 * Return: return number of values printed
 */
int _char(va_list args, int printed_values)
{
	int value = va_arg(args, int);

	putchar(value);
	return (printed_values++);

}
