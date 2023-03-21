#include"main.h"
/**
 * print_last_digit - main
 *
 * @n: input
 *
 * Return: last digit
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
