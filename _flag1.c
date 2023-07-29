#include "main.h"
/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: takes parameter of data type int.
 * Return: Flags:
 */

int get_flags(const char *format, int *i)
{
	int index = *i + 1;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#',: ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, FD_ZERO, F_HASH, F_SPACE, 0};
	int j;

	while (format[index] != '\0') {
		for (j = 0; FLAGS_CH[j] != '\0'; j++) {
			if (format[index] == FLAGS_CH[j]) {
				flags |= FLAGS_ARR[j];
				break;
			}
		}

		if (FLAGS_CH[j] == '\0') {

			break;
		}

		index++;
	}

	*i = index - 1;
	return (flags);
}
