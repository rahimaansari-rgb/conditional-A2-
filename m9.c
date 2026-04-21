#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("enter number: ");
    int sum = 0, odd = 0;

    while (num > 0)
    

    {
        int digit = num % 10;

        sum += digit;

        if (digit % 2 != 0)
            odd++;

        num /= 10;
    }

    printf("sum = %d\n", sum);
    printf("odd digits = %d\n", odd);
}
