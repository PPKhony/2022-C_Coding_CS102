#include<stdio.h>
int main() {
    int i = 5;
    int *ptr;
    ptr = &i;
    printf("i = %d\n", i);
    printf("*ptr = %d\n", *ptr);
    printf("ptr = %p\n", ptr);
    return 0;
}