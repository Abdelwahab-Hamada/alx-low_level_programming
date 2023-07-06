#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: unsigned long int input
  * @index: unsigned int input
  * Return: 1 | -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ln, digit;

	ln = (sizeof(unsigned long int) * 8) - 1;

	if (index > ln)
		return (-1);
	digit = 1 << index;
	*n = *n | digit;
	return (1);
}
