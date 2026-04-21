#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int units = get_int("units: ");
    float bill;

    if (units <= 100)

        bill = units * 5;

    else if (units <= 200)

        bill = (100 * 5) + (units - 100) * 6;
    else

        bill = (100 * 5) + (100 * 6) + (units - 200) * 8;

    if (bill > 1000)
    
        bill += bill * 0.10;

    printf("total Bill = %.2f\n", bill);
}
