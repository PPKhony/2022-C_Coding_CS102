#include<stdio.h>
int main() {
    int Arr[3];
    for (int i = 0; i < 3 ; i++)
    {
        scanf("%i", &Arr[i]); 
    }
    if (Arr[2]-Arr[1]){
        printf("%i",Arr[2]-Arr[1]-1); return 0;
    } if (Arr[2] - Arr[1]){
        printf("%i",Arr[2]-Arr[1]-1); return 0;
    } else if (Arr[1] - Arr[0] > Arr[2] - Arr[1]) {
        printf("%i",Arr[1]-Arr[0]-1); return 0;
    }
    return 0;
}