#include "main.h"
/**
 * _decimal - function that prints
 * out put to stdout
 * @args: variadic arguments
 * @printed_values: print values of argument
 * Return: return number of values printed
 */
int _decimal(va_list args, int printed_values)
{
	int value = va_arg(args, int);

	print_int(value);
	return (printed_values++);
}
/**
 * print_int - function that prints
 * out put to stdout
 * @n: variadic arguments
 */
void print_int(int n)
{
	if (n > 9)
	{
		int a = n / 10;

		n -= 10 * a;
		print_int(a);
	}
	putchar('0' + n);
}
