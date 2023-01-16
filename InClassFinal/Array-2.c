#include<stdio.h>
int main() {
    int count,i;
    float max;

    printf("How many numbers? ");
    scanf("%i", &count);
    max = -9999999.99;
    float number[count];

    printf("Enter all number \n");
    for(i=0 ; i < count ; i++) {
        scanf("%f", &number[i]);
        if(max < number[i]) {
            max = number[i];
        }
    }

    printf("Your maximum is %.2f",max);

return 0;
}
