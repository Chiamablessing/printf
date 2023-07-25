#include "main.h"

/**
 * _printf - printf function
 * @format: format.
 * Return :char_printed
 */

int _printf(const char *format, ...)
{
	int char_printed = 0;
	va_list args_list;

	if (format == NULL)
		return (-1);

	va_start(args_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			char_printed++;
		}
		else
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == '%')
			{
				putchar(*format);
				char_printed++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args_list, int);

				putchar(c);
				char_printed++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args_list, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
				{
					putchar(str[str_len]);
					str_len++;
					char_printed++;
				}
			}

		 }
		 format++;
	}

	va_end(args_list);

	return (char_printed);
}
