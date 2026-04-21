#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("age: ");
    int day = get_int("day (0=weekday,1=weekend): ");

    if (age < 10)

    {
        printf("ticket = 60\n");
    }

    else

    {
        if (age <= 25)

        {
            if (day == 0)
                printf("ticket = 100\n");

            else

                printf("ticket = 120\n");
        }
        else
        {
            if (day == 0)

                printf("ticket = 140\n");
            else

                printf("ticket = 160\n");
        }
    }
}
