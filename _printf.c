#include "main.h"
/**
 * _printf - function that prints
 * out put to stdout
 * @format: a character string.
 * The format string is composed of
 * zero or more directives.
 * @...: variadic arguments
 * Return: return number of values printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_values = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (_flags(*format, args, printed_values) == 1)
				format++;
		}
		if (*format == '\0')
		{
			printed_values++;
			return (printed_values);
		}
		putchar(*format);
		printed_values++;
		format++;
	}
	va_end(args);

	return (printed_values);
}
