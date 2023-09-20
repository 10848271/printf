#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* helper function for conversion specifiers implementations goes here */

/**
 * base_converter - converts a number to specified base
 * @number: number to convert
 * @base: base to convert to
 *
 * Return: string representation of the base number
 */
char *base_converter(int number, int base)
{
	int idx, size;
	char *base_number; /* base number in string form */
	int diff = number; /* holds the quotient number after division */
	/* int remainder; */ /* holds the remainder after division */

	size = max_b_size(number);
	base_number = (char *)malloc(size + 1);

	for (idx = 1; idx <= size; idx++)
	{
		if (_pow(2, size - idx) <= diff)
		{
			base_number[idx - 1] = '1'; /* ascii for 1*/
			diff -= _pow(base, size - idx);
		}
		else
			base_number[idx - 1] = '0'; /* ascii for 0*/
	}
	base_number[size + 1] = '\0';
	return (base_number);
}

/**
 * max_b_size - converts a number to specified base
 * @number: number to check size
 *
 * Return: size of number
 */
int max_b_size(int number)
{
	int i;

	for (i = 0; _pow(2, i) <= number; i++)
		continue;

	return (i);
}

char *itoa(int number)
{
	char *a_number;
	int div, digits, i = 0;

	digits = digit_count(number);
	div = _pow(10, digits - 1);
	a_number = (char *)malloc(digits + 1);
	
	while (i < digits)
	{
		a_number[i] = ((number / div) + 48);
		if (number != 0)
			number = number % ((number / div) * div);
		div /= 10;
		i++;
	}
	a_number[i] = '\0';
	return (a_number);
}

int digit_count(int number)
{
	int count = 0;

	if (number >= 0 && number < 10)
		return (1);
	while (number)
	{
		count++;
		number /= 10; 
	}
	return (count);
}

int _pow(int base, int expo)
{
	int i, pow = 1;

	for (i = 0; i < expo; i++)
		pow *= base;

	return (pow);
}
