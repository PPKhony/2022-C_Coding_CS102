#include<stdio.h>
int main() {
    int num;
    int N,a;
    int sum;

    printf("Please enter your ticket number <xxxxx>: ");
    scanf("%i", &num);

    if(num <=99999 && num >=10000) {
    sum = 0;
    a = 10000;
    while(a >=1) {
        N = num/a;
        num = num - (N*a);
        sum = sum+N;
        a = a/10;
    }

    if(sum>=10) {
    do {
        N = sum;
        N = N/10 + N%10;
        sum = N;
    } while(N>=10);
    } else;

    printf("Your number is: %i \n", sum);
    printf("Your prediction is: ");
    switch(sum) {
        case 0 : printf("Bad luck \n"); break;
        case 1 : printf("Good luck :) \n"); break;
        case 2 : printf("Will meet your soul-mate soon ^__^ \n"); break;
        case 3 : printf("Should make merit \n"); break;
        case 4 : printf("Lucky in love \n"); break;
        case 5 : printf("Need more rest! \n"); break;
        case 6 : printf("Beware of an accident @_@ \n"); break;
        case 7 : printf("Lucky in game \n"); break;
        case 8 : printf("Looking good \n"); break;
        case 9 : printf("Will get some money soon \n"); break;
        default : printf("System error please contact developer \n"); break;
    }
    }   else {
    printf("Invalid format input!!"); }
    return 0;
}
