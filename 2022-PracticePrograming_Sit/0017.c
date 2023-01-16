#include<stdio.h>
int i;
void swop(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int Arr[4];
    int size = 4;
    for (i = 0; i < size; i++)
    {
        scanf("%i", &Arr[i]);
    }
    for (i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (Arr[j]>Arr[j+1])
            {
                swop(&Arr[j],&Arr[j+1]);
            }
        }
    }
    
    printf("%i", Arr[2]*Arr[0]);
    
return 0;   
}