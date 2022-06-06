#include <stdio.h>

/**
 * main - entry point
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		x++;
	}

	putchar('\n');
	return (0);
}
