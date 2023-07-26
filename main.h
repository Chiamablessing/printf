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
*/
typedef struct func_s
{
	char flag;
	void (*f)(va_list arg, int);
} func_t;

int _printf(const char *format, ...);
void _string(va_list args, int printed_values);
void _char(va_list args, int printed_values);
void print_int(int n);
void _decimal(va_list args, int printed_values);
int _flags(char flag, va_list args, int printed_values);
#endif
