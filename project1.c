#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
int main()
{
    int w = 0;
    int l = 0;
    while (1)
    {
        srand(time(0));
        int n;
        printf("*****************************************************************\n");
        printf("select one of the following number\n 1:snake\n 2:water \n 3:gun\n 4:exit\n");
        printf("*****************************************************************\n");
        int a = rand() % 3 + 1;
        scanf("%d", &n);
        if (n < 1 || n > 4)
            continue;
        else if (n == 4)
        {
            printf("###############################\n");
            printf("you successfully exit\n");
            printf("###############################\n");
            break;
        }
        printf("::::::::::::::::::::::::::::::::::::::\n");
        if (a == 1)
            printf("computer choosen: snake\n");
        else if (a == 2)
            printf("computer choosen: water\n");
        else
            printf("computer choosen: gun\n");
        printf("::::::::::::::::::::::::::::::::::::::\n");
        if (n == a)
            printf("match result: draw\n");
        else if ((n == 1 && a == 3) || (n == 2 && a == 1) || (n == 3 && a == 2))
        {
            printf("match result: you loose\n");
            l++;
        }
        else
        {
            printf("match result: you win\n");
            w++;
        }
        printf("---------------------------\n");
        printf("you win:%d\n", w);
        printf("you loss:%d\n", l);
        printf("---------------------------\n");
        delay(2);
    }

    return 0;
}