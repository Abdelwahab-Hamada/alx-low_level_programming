#include"main.h"
/**
 * print_square - main
 * @size: input
 */
void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchr('\n')
	} else
	{
		for (row = 0 ; row < size ; row++)
		{
			for (col = 0 ; col < size ; col++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
}
