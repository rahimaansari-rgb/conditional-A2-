#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float total = 0;


    while (1)

    {
        float price = get_float("price (0 to stop): ");

        if (price == 0)
            break;

        total += price;
    }

    float discount;

    if (total > 2000)
        discount = total * 0.15;

    else

        discount = total * 0.05;

    printf("total = %.2f\n", total);
    printf("final = %.2f\n", total - discount);
}
