#include<stdio.h>
int main() {
    int a,b,result;
    printf("Please enter input:");
    scanf("%i%i",&a,&b);
    if(a==b){
        a *= 3;
        result = a;
    } else {
        result = (a+b);
    }
    printf("%i",result);
}