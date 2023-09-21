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
	char *base_number, *rev_number; /* base number in string form */
	int quo = number; /* holds the quotient number after division */
	int rem; /* holds the remainder after division */

	size = max_b_size(number, base);
	base_number = (char *)malloc(size + 1);

	idx = 0;
	while (quo)
	{
		rem = quo % base;
		quo = quo / base;
		if (rem < 10)
			base_number[idx] = 48 + rem;
		else
			base_number[idx] = 97 + (rem - 10);
		idx++;
	}

	rev_number = (char *)malloc(size + 1);
	for (idx = 0; idx < size; idx++)
	{
		rev_number[idx] = base_number[size - idx - 1];
	}
	rev_number[size + 1] = '\0';
	base_number = rev_number;

	return (base_number);
}

/**
 * max_b_size - converts a number to specified base
 * @number: number to check size
 *
 * Return: size of number
 */
int max_b_size(int number, int base)
{
	int i;

	for (i = 0; _pow(base, i) <= number; i++)
		continue;

	return (i);
}

/**
 * itoa - converts a number to string
 * @number: number to convert
 *
 * Return: string of number
 */
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

/**
 * digit_count - counts digits in a number
 * @number: number to count
 *
 * Return: digits of number
 */
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

/**
 * _pow - finds the exponent of a number
 * @base: base number
 * @expo: power number
 *
 * Return: base to the power of expo
 */
int _pow(int base, int expo)
{
	int i, pow = 1;

	for (i = 0; i < expo; i++)
		pow *= base;

	return (pow);
}
