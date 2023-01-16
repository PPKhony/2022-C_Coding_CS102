#include<stdio.h>
int main() {
    int x = 9;
    int *ptr;
    ptr = &x;//รับค่า adress x
    printf("x is %d \n", x); //x
    printf("%d \n", *ptr); ///*ptr
    
    int ya = 10;
    int *y;
    y = &ya;
    printf("*x is %d", *y);
    
    return 0;
}