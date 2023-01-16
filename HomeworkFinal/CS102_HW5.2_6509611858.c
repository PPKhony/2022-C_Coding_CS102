/*
Author Praphon Khaosaard
Student ID: 6509611858
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int a[11]; //array
    int sum,i,avg;
    int *p; //pointer
    p = &a[0];
    srand(time(0));

    printf("The orininal array: ");
    for (i = 0; i < 10; i++)
    {
        *(p+i) = rand()%10;
        printf("%i ", *(p+i));
    }
    printf("\n");
    sum = 0;

    for (i = 0; i < 10; i++)
    {
        sum += *(p+i);
    }
    avg = sum/10;

    for (i = 9; i >= 5; i--)
    {
        *(p+(i+1)) = *(p+i);
    }

    //--
    *(p+5) = avg;
    printf("Average: %i \n", avg);
    //--

    printf("The current array : ");
    for (i = 0; i < 11; i++)
    {
        printf("%i ", *(p+i));
    }

   return 0;
}

