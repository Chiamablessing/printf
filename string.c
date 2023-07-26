#include "main.h"

/**
 * _string - function that prints
 * out put to stdout
 * @args: variadic arguments
 * @printed_values: print values
 */
void _string(va_list args, int printed_values)
{
	char *str = va_arg(args, char *);
	int str_len = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[str_len] != '\0')
	{
		write(1, &str[str_len], 1);
		printed_values++;
		str_len++;
	}

