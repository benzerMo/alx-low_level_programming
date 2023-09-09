#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    int first_digit;
    int second_digit;

    for (first_digit = 0; first_digit < 9; first_digit++)
    {
        for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
        {
            putchar('0' + first_digit);
            putchar('0' + second_digit);

            if (first_digit != 8 || second_digit != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}
