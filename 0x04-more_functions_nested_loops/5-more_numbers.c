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
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
