#include"main.h"
/**
 * print_square - main
 * @size: input
 */
void print_square(int size)
{
	int row;
	int col;

	for (row = 0 ; row < size ; row++)
	{
		for (col = 0 ; col < size ; col++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
}
