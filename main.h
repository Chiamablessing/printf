#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
*struct func_s - struture
* @flag: The format
* @f: The function associated.
* Return: return number of values printed
 */
typedef struct func_s
{
	char flag;
	int (*f)(va_list arg, int);
} func_t;

int _printf(const char *format, ...);
int _string(va_list args, int printed_values);
int _char(va_list args, int printed_values);
void print_int(int n);
int _decimal(va_list args, int printed_values);
int _flags(char flag, va_list args, int printed_values);
int get_precision(const char *format, int *i, va_list list);
#endif
