/*
call by reference
Pass by reference
*/
#include<stdio.h>
void addTwoNumber(int *n1, int *n2) {
    int sum;
    sum = *n1 + *n2;
    printf("The sum of %i and %i is %i", *(n1), *(n2), sum);
}

int main(){
    int first, second , *sum; 
    printf("Input the first numbers :");
    scanf("%i", &first);
    printf("Input the second number :");
    scanf("%i", &second);
    addTwoNumber(&first, &second);
    return 0;
}
