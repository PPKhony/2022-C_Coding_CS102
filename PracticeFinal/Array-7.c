/*
Bubble sorting algorithm
*/
#include<stdio.h>

void swop(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int Arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                swop(&Arr[j], &Arr[j + 1]);
            }
        }
    }
}

int main()
{
    int Arr[5] = { 5,
               6,
               4,
               2,
               8 };
    

    bubblesort(Arr, 5);
    printf("Sorted array: \n");
    for  (int i = 0; i < 5; i++)
    {
        printf("%i ", Arr[i]);
    }
}   