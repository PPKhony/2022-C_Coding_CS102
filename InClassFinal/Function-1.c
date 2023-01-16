#include<stdio.h>
// ลองมีการเช็ค Input ด้วย Do-while
int main() {
    int input, power,check;
    check = 0;
    input = 1;
    power = 1;
    do {
        if(input <= 0 || power <= 0) {
            printf("Please re-input \n");
        } else;
        printf("enter 2 positive integer: ");
        scanf("%i%i", &input, &power); 
    } while (input<=0 || power <= 0);
    int sum;
    int i;

    sum = input;
    for (i = 1; i < power; i++)
    {
        sum = sum*input;
    }
    
    printf("%i powered by %i is %i", input, power, sum);
    return 0;
}