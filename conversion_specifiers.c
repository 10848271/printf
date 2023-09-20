#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/* conversion specifier functions implementation goes here */

/**
 * c_spec_func - function that perform c conversion specifier actions
 * @value: character to print
 *
 * Return: number of characters printed
 */
int c_spec_func(char *value)
{
	return (write(1, value, 1));
}

/**
 * s_spec_func - printing a string to stdout handling %s format directive
 * @value: string to print
 *
 * Return: number of characters printed
 */
int s_spec_func(char *value)
{
	int idx;

	for (idx = 0; value[idx]; idx++)
		continue;

	return (write(1, value, idx));
}

/**
* d_i_spec_func - function that handles conversion %d and %s
* @value: value to print
*
* Return: handler
*/
int d_i_spec_func(char *value)
{
	int idx;

	for (idx = 0; value[idx]; idx++)
		continue;

	return (write(1, value, idx));
}

/**
 * b_spec_func - handles %b format specifier for binary conversion
 * @value: number to convert
 *
 * Return: binary representation of value
 */
int b_spec_func(char *value)
{
	char *binary = "";
	int idx, number = atoi(value);

	binary = base_converter(number, 2);
	for (idx = 0; binary[idx]; idx++)
		continue;
	return (write(1, binary, idx));
}
