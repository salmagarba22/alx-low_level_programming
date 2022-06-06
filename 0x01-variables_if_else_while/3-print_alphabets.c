#include <stdio.h>

/**
 * main - entry point
 * prints the alphabet in lowercase,and then in uppercase
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
