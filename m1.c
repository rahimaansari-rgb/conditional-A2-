#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int battery = get_int("battery: ");
    int charger = get_int("charger (1=yes,0=no): ");

    if (battery < 20 && charger == 0)

        printf("connect charger immediately\n");

    else if (battery >= 20 && battery <= 80)

        printf("battery level normal\n");

    else if (battery > 80 && charger == 1)

        printf("unplug charger to save battery health\n");
}
