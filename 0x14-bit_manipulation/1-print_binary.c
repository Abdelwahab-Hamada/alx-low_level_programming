#include "main.h"

/**
  * print_binary - prints a binary representation of a number
  * @n: unsigned long int input
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int cpy, i, k;

	cpy = n;
	i = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (cpy != 0)
	{
		i++;
		cpy = cpy >> 1;
	}
	while (i)
	{
		cpy = n;
		for (k = 1; k < i; k++)
			cpy = cpy >> 1;
		if (cpy == (cpy | 1))
			_putchar('1');
		else
			_putchar ('0');
		i--;
	}
}
