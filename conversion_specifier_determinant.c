#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_spec_func - determines which spec_func is to be executed
 * @spec_char: supposed spec_char to aid in spec_function determination
 * @unnamed: variadic va_list argument
 *
 * Return: number of characters printed
 */
int get_spec_func(char spec_char, va_list unnamed)
{
	int count, idx;
	char spec, *c_str;

	con_spec con_spec_list[] = {
		{'c', c_spec_func},
		{'s', s_spec_func},
		{'d', d_spec_func},
		{'i', d_spec_func},
		{'b', b_spec_func},
		{'\0', NULL},
	};

	for (idx = 0; con_spec_list[idx].spec_char; idx++)
	{
		spec = con_spec_list[idx].spec_char;
		if (spec == spec_char)
			break;
	}
	if (spec_char == 'c')
	{
		c_str = (char *)malloc(2);
		c_str[0] = va_arg(unnamed, int);
		c_str[1] = '\0';
		count = con_spec_list[idx].spec_func(c_str);
		free(c_str);
	}
	else if (spec_char == 's')
	{
		/*90 67*/
		count = con_spec_list[idx].spec_func(va_arg(unnamed, char *));
	}
	else if (spec_char =='d' || spec_char == 'i')
	{
		c_str = itoa(va_arg(unnamed, int));
		con_spec_list[idx].spec_func(c_str);
	else if (spec_char == 'b')
	{
		c_str = itoa(va_arg(unnamed, int));
		/*printf("b:%s", c_str);*/
		count = con_spec_list[idx].spec_func(c_str);
	}

	return (count);
}
