#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float total = 0;
    int below = 0;


    for (int i = 1; i <= 7; i++)

    {
        float hours = get_float("day %d hours: ", i);
        total += hours;

        if (hours < 2)
        
            below++;
    }

    printf("total = %.2f\n", total);
    printf("average = %.2f\n", total / 7);
    printf("days below 2 hrs = %d\n", below);
}
