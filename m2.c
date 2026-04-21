#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int total = get_int("total classes: ");

    int attended = get_int("attended: ");

    float percent = (attended * 100.0) / total;

    if (percent >= 75)

        printf("allowed to sit in exam\n");

    else

        printf("not allowed\n");

    int needed = (0.75 * total) - attended;

    if (needed > 0)

        printf("need %d more classes\n", needed);

    else
        printf("no extra classes needed\n");
}
