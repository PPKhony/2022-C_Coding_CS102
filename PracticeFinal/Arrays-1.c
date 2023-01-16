#include<stdio.h>
int main() {
    int number[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        number[i] = i+1;
        printf("%i \n",number[i]);

        number[i] = i+3;
        printf("%i" , number[i]);
        //ทดสอบการ pull
    }
    
}
