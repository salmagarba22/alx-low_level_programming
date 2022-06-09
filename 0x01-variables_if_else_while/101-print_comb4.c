#include <stdio.h>

/**
 * main - entry point
 * prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int y;
	int x;

	while (x < 10)
	{
		if (y != x && x != i && i < x && x < y)
		{
			putchar('0' + i);
			putchar('0' + x);
			putchar('0' + y);

			if (y + x + i != 9 + 8 + 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
	y++;

		}
	x++;
		}
	i++;
	}

	putchar('\n');

	return (0);
}
