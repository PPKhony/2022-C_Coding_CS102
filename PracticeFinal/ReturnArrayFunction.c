#include<stdio.h>
#include<time.h>
#include<stdlib.h>

const int size = 10;
int i;

int * GetRandom(); 

int main() {
    int *arr;
    arr = GetRandom();

    for (i = 0; i < size; i++)
    {
        printf("%i ", *(arr+i));
    }
    return 0;
}

int * GetRandom() {
    srand(time(0));
    static int random[12];
    
    for (i = 0; i < size; i++)
    {
        random[i] = rand()%100;
    }
    return random;
}
