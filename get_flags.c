#include "main.h"
/**
 * _flags - function that prints
 * out put to stdout
 * @flag: format specifier
 * @args: variadic argument
 * @printed_values: printed values
 * Return: return 1 if specifier is found and 0 otherwise
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
			flags[i].f(args, printed_values);
			return (1);
		}
	}
	return (0);
}
