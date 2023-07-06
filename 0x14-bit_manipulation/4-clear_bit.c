#include "main.h"

/**
  * clear_bit -  sets the value of a bit to 0 at a given index
  * @n: unsigned long int input
  * @index: unsigned int input
  * Return: 1 | -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ln;

	if (!n)
		return (-1);

	ln = (sizeof(unsigned long int) * 8) - 1;

	if (index > ln)
		return (-1);
	ln = 1 << index;
	if ((ln | *n) == *n)
		*n = *n ^ ln;
	return (1);
}
