#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * print the last digit of the number stored in the variable n
 *Return: 0
*/
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					printf("last digit of %d is ", n);
					if (n > 5)
					{
						printf("greater than 5");
					}
					else if (n == 0)
					{
						printf("0");
					}
					else if (n < 6)
					{
						printf("less than 6 not 0");
					}

					return (0);
}
