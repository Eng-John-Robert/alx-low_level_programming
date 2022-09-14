#include "main.h"

/**
 * print_last_digit - main function
 *
 * @n: integer argument
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));
}
