#include "main.h"
/**
 * _flags - function that prints
 * out put to stdout
 * @flag: format specifier
 * @args: variadic argument
 * @printed_values: printed values
 * Return: return number of values printed
 */

int _flags(char flag, va_list args, int printed_values)
{
	func_t flags[] = {
		{'s', _string},
		{'c', _char},
		{'d', _decimal},
		{'i', _decimal},
	};
	int i = 0;

	for (i = 0; i <= 3; i++)
	{
		if (flags[i].flag == flag)
		{
			return (flags[i].f(args, printed_values));
		}
	}
	return (printed_values);
}
