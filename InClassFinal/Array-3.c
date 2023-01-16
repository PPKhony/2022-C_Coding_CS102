#include<stdio.h>

int main() {
    int i;
    float vecA[6], vecB[6], vecC[6];
    printf("Enter  members of vector A: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f",&vecA[i]);
    }
    
    printf("Enter  members of vector B: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f",&vecB[i]);
    }

    printf("The summation vector C is: ");
    for (i=0;i<5;i++){
        vecC[i] = vecA[i] + vecB[i];
        printf("%.2f  ", vecC[i]); //อย่าลืม Index T-T
    }
    return 0;
}