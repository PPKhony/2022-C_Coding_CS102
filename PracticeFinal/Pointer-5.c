#include<stdio.h>

int main() {
    int *x;
    *x = 5;
    int *y;
    *y = 6;
    int a = 80;
    int b = 100;

    x = &a;
    y = &b;

    for(int i = 0; i < *x%4 ; i++) {
        printf("Hello world %i", i);
    }
    return 0;
}