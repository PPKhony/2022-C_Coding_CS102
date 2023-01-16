#include<stdio.h>
int i,j;
int Arr[3];

void swop(int *a, int *b) {
    int TEMP;
    TEMP = *a;
    *a = *b;
    *b = TEMP;
}

void bubbleSort(int Arr[] ,int size) {
    for (i = 0; i < size-1; i++)
    {
        for (j = 0; j < size-i-1 ; j++)
        {
            if (Arr[j] > Arr[j+1])
            {
                swop(&Arr[j],&Arr[j+1]);
            }
        }
    }
}

int main() {
    int size = 3;
    for (i = 0; i < size; i++)
    {
        scanf("%i", &Arr[i]);
    }
    bubbleSort(Arr, size);
    
    int Range = Arr[2] - Arr[1];
    if (Range == 0)
    {
        printf("%i",Range);
        return 0; 
    }
    
    printf("%i", Range-1);
    return 0;
}