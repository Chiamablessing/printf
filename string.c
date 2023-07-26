#include "main.h"

/**
 * _string - function that prints
 * out put to stdout
 * @args: variadic arguments
 * @printed_values: print values
 * Return: return number of values printed
 */
int _string(va_list args, int printed_values)
{
	char *str = va_arg(args, char *);

	while (*str)
	{
		putchar(*str);
		printed_values++;
		str++;
	}
	return (printed_values);
}
