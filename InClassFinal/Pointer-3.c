#include<stdio.h>
int main() {
    int i;
    int x = 9;
    int nums[4] = {30, 40, 50, 60};
    int *ptr;

    ptr = nums;
    for (i = 0; i < 4; i++)
    {
        printf("Printing Array + Pointer using loop = %i \n", *(ptr + i));
    }    
}