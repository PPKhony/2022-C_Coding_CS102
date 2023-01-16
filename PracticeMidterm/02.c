#include<stdio.h>
int main() {
    int row;
    int i,k;
    float j;
    printf("Please input row : ");
    scanf("%i",&row);
    
    for(i=1;i<=row;i+=1) {
        k = row-i;
        for(;k>=1;k--){
            printf(" ");
        }

        for(j=1;j<=i;j+=0.50) {
            printf("*");
        }
        printf("\n");
    }
}