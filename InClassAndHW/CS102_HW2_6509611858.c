#include<stdio.h>

int main() {
    int x ,y ,z;
    printf("Enter 3 integers: ");
    scanf("%i%i%i",&x ,&y ,&z);
    if(x<y&&x<z){
        printf("Sorted Output: %i",x);
        if(y<z){
            printf(" <= %i <= %i", y, z);
        }
        else {
            printf(" <= %i <= %i", z, y);
        }
    }
    else if (y<x&&y<<z){
        printf("Sorted Output: %i",y);
        if(x<z){
            printf(" <= %i <= %i", x, z);
        }
        else {
            printf(" <= %i <= %i", z, x);
        }
    }
    else if (z<x&&z<y){
        printf("Sorted Output: %i",z);
        if(x<y){
            printf(" <= %i <= %i", x, y);
        }
        else {
            printf(" <= %i <= %i", y, x);
        }
    }
    else;
    return 0;
}
