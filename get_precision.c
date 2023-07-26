#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: pointer to an integer of an index.
 * @list: va_list containing the arguments to be prrinted.
 *
 * Return: The Precision value.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int index = *i + 1;
	int precision = -1;

	if (format[index] != '.')
		return (precision);

	precision = 0;
	index++;

	while (format[index] != '\0')
	{
		/**
		* if (is_digit(format[index]))
		 *{
		 *	precision *= 10;
		 *	precision += format[index] - '0';
		 *}
		 *else
		 */
		if (format[index] == '*')
		{
			index++;
			precision = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
		index++;
	}

	*i = index - 1;
	return (precision);
}
