#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int booked = 0, empty = 0;

    for (int i = 1; i <= 40; i++)

    {
        int input = get_int("seat: ");
        

        if (input == 1)
            booked++;
        else

            empty++;

        if (booked == 40)
            break;
    }


    printf("booked = %d\n", booked);
    printf("empty = %d\n", empty);
}
