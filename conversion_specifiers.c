#include <unistd.h>
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
* d_i_spec_func - function that handles conversion
* @d: value to convert
* @i: another value
* return: handler
*/
int d_i_spec_func (char *)
{
int idx;

        for (idx = 0; value[idx]; idx++)
                continue;

        return (write(1, value, idx));
}
