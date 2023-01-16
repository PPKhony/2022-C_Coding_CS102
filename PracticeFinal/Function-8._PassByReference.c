#include<stdio.h>
void swop(int *x , int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z; // ใช้ &y ไม่ได้
}
int main() {
    int x,y;
    printf("Please Enter x and y value: ");
    scanf("%i%i",&x, &y);
    swop(&x,&y);
    printf("Swop value x is %i and y is %i", x,y);
    return 0;
}