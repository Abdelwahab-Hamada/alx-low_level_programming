#include"main.h"
/**
 * more_numbers - main
 */
void more_numbers(void)
{
	int n;
	int counter;

	for (counter = 1 ; counter <= 10 ; counter++)
	{
		for (n = '0' ; n <= '14' ; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
