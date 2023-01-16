#include <stdio.h>
int SIZE = 5;

void swop(int *a, int *b)
{
    int TEMP;
    TEMP = *a;
    *a = *b;
    *b = TEMP;
}

void Bubblesort(int Arr[], int SIZE)
{
    int i, j;
    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = 0; j < SIZE - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                swop(&Arr[j], &Arr[j + 1]);
            }
        }
    }
}

int main() {
    int Arr[5] = {5, 4, 7, 2, 3};
    Bubblesort(Arr,SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", Arr[i]);
    }
    
}