#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int n;
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;
	if (n > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, l_d);
	}
	else if (n == 0)
	{
		printf("the last digit of %d is %d  and is 0\n", n, l_d);
	}
	else
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
	}
	return (0);
}
