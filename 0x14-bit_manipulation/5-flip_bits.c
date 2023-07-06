#include "main.h"

/**
  * flip_bits -  returns counter
  * @n: unsigned long int input
  * @m: unsigned long int 2nd input
  * Return: counter
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_counter = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			diff_counter++;
		m = m >> 1;
		n = n >> 1;
	}
	return (diff_counter);
}
