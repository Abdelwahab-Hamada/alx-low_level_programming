#include"main.h"
#include"6-abs.c"
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
	return (_abs(n % 10));
}
