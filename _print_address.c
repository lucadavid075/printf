#include "main.h"

/**
 * _print_address - prints address of input in hexa format
 * @ap: va_list arguments from _printf
 *
 * Return: number of char printed
 */

int _print_address(va_list ap)
{
	unsigned long int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned long int);

	if (!n)
		count += _putchar('0');
	s = convertadd(n, 16, 1);
	count += _puts("0x");
	count += _puts(s);
	return (count);
}
