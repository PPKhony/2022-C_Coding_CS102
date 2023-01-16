#include<stdio.h>

int a = 888;
int b = 50;
int x = 90;
void AAA(int a, int b) {
    int c;
    printf("a is %i and b is %i \n", a, b);
    for (c = 1; c <= a; c++)
    {
        printf("%i \n", b);
    }

    printf("x is %i\n", x);
    
}

float y = 55.55;
int main() {
    int x = 1, y = 2;
    AAA(y, 44);
    printf("x is %i, y is %i\n",x ,y);
    printf("a is %i and b is %i \n", a, b);

    return 0;

}
