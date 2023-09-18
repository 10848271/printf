#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - prints format string with or without directives to standard output.
 * @format: string with or without format specifier to print to stdout
 *
 * Return: number of characters printed to stdout
 */
int _printf(const char *format, ...)
{
	int i;
	ssize_t count = 0;
	
	for (i = 0; format[i]; i++)
	{
		count += write(1, &format[i], 1);
	}

	return (count);
}
