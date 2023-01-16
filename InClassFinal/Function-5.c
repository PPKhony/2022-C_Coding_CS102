/*
เขียนส่วนของโปรแกรม isEven 
Date : 1/11/2565
*/

#include<stdio.h>
void isEven(int a) {
    if(a%2 == 0) {
        printf ("Ans is even");
    } else {
        printf ("Ans is odd");
    }
}


float maxOfThree(float n1, float n2, float n3) {
    float ans;
    if(n1 > n2 && n1 > n3) {
        return n1;
    } else if(n2 > n3) {
        return n2;
    } return n3;
}

int main() {
    
    float Number[3];
    isEven(6);
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &Number[i]);
    }

    float max = maxOfThree(Number[0], Number[1], Number[2]);

    printf("%f", max);
    return 0;
}