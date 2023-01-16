#include<stdio.h>
int power(int x, int y) {
        int i = 1;
        int z = x;
        while (i < y)
        {
            z *= x;
            i++;
        }
        return z;
}


int main() {
    int z,i;

    printf("Number is %i", power(3,4));
    return 0;
}

//ASCII Code