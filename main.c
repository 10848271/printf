#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	/*unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;*/

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	/*len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);*/

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Length:[%d, %i]\n", len, len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length:[%d, %i]\n", len, len2);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Length:[%d, %i]\n", len, len2);

	_printf("Unsigned binary:[%b]\n", 800);
	_printf("Unsigned octal:[%o]\n", 15);
	printf("Unsigned octal:[%o]\n", 15);
	_printf("Unsigned hexadecimal:[%x, %X]\n", 23453, 23453);
	printf("Unsigned hexadecimal:[%x, %X]\n", (unsigned int)23453, (unsigned int)23453);
	return (0);
}
