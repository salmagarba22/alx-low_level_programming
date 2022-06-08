#include "main.h"

/**
*jack_bauer - prints 24 hours
*Return: void
*/
void jack_bauer(void)
{
	int x, y, num;

	for (x = 0; y < 60; y++)
	{
		for (y = 0; y < 60; y++)
		{
			if (x < 10)
			{
				_putchar(0 + '0');
				_putchar(x + '0');
			}
			else
			{
				num = x / 10;
				_putchar(num + '0');
				num = x % 10;
				_putchar(':');
				if (y < 10)
				{
					_putchar(0 + '0');
					_putchar(y + '0');
				}
				else
				{
					num = y / 10;
					_putchar(num + '0');
					num = y % 10;
					_putchar(num + '0');
				}

				_putchar('\n');
			}

	}
}
