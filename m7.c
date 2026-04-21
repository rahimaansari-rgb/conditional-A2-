#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++)
    {
        int pin = get_int("enter PIN: ");


        if (pin == 5555)

        {
            printf("access Granted\n");
            return 0;
        }
    }

    printf("account locked\n");
}
