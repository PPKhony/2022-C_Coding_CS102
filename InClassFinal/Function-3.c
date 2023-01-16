#include<stdio.h>
int i;

void star(int star) {
    for(i=1;i<=star;i++) {
        printf("*");
    }
    printf("\n");
}

float z = 8;

float returnex(float x, float y) {
    z = x + y;
    return z;
}

int main() {
    printf("Please enter number of star :");
    scanf("%i", &i);
    star(i);
    printf("%f", returnex(9.0,8.0));

    return 0;
}

