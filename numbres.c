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
	int value = va_arg(args, int), i;

	print_int(value, &i);
	printed_values = i;
	return (printed_values);
}
/**
 * print_int - function that prints
 * out put to stdout
 * @i: variadic arguments
 * @n: variadic arguments
 */
void print_int(int n, int *i)
{
	if (n < 0)
	{
		putchar('-');
		(*i)++;
		n = -n;
	}

	if (n > 9)
	{
		int a = n / 10;
		n -= 10 * a;
		print_int(a, i);
	}

	putchar('0' + n);
	(*i)++;
}
