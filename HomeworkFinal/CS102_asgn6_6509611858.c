/*
6509611858
นาย ประพล ขาวสอาด
*/

#include <stdio.h>
#include <math.h>

int size = 10 ;
int Arr_global[11];
int i;

float average(int Arr[size]);
void display(int Arr[size], int size);
float stdev(int Arr[size], int size, float average);
int min(int Arr[size], int size);
int max(int Arr[size], int size);

/*--------------------------------*/
int main() {
    printf("Enter Array of %i integers: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%i", &Arr_global[i]);
    }

    display(&Arr_global[0], size);
    printf("Average is %f \n", average(&Arr_global[0]));
    printf("Standard division is %f \n", stdev(&Arr_global[0], size, average(&Arr_global[0])));
    printf("min is %i \n", min(&Arr_global[0], size));
    printf("max is %i \n", max(&Arr_global[0], size));

    return 0;
}
/*-------------------------------*/

void display(int Arr[size] , int size) {
    for (i = 0; i < size; i++)
    {
        printf("%i ", Arr[i]);
    }
    printf("\n");
}

float average(int Arr[size]) {
    int sum;
    float average;
    for (i = 0; i < 10; i++)
    {
        sum = sum + Arr[i];
    }
    average = sum / size;
    return average;
}


float stdev(int Arr[size], int size, float average) {
    float memA,memB;
    float SD;
    float Higher = 0 , Lower = 0 ;
    for (i = 0; i < size; i++)
    {
        memA = Arr[i] - average;
        memB = pow(memA,2);
        Higher += memB;
        
    }
    Lower = size - 1; 
    SD = sqrt(Higher / Lower);
    return SD;
}

int min(int Arr[size], int size) {
    int a = Arr[0];
    for (i = 0; i < size; i++)
    {
        if (Arr[i] < a)
        {
            a = Arr[i];
        }
    }
    return a;
}

int max(int Arr[size], int size) {
    int a = Arr[0];
    for (i = 0; i < size; i++)
    {
        if (Arr[i] > a)
        {
            a = Arr[i];
        }
    }
    return a;
}
