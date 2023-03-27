#include"main.h"
/**
 * swap_int - main
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

