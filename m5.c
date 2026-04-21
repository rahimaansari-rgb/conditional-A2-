#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int type = get_int("user type: ");
    int pass = get_int("password: ");

    if (type == 1)

    {
        if (pass == 1234)

            printf("welcome Admin Panel\n");
        else

            printf("invalid password\n");
    }
    else if (type == 2)
    {
        if (pass == 2222)

            printf("welcome Teacher Panel\n");
        else
            printf("wnvalid password\n");
    }
    else if (type == 3)
    {
        if (pass == 3333)

            printf("Welcome Student Panel\n");
        else

            printf("invalid password\n");
    }
}
