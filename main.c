#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 * Return: return number of values printed
 */
int main(void)
{
	int len, len2;

	len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	fflush(stdout);
	printf("_printf: %d\n", len);
	printf("printf: %d\n", len2);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}