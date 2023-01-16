#include<stdio.h>

int main() {
    int i,j;
    int MatA[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element - [%i],[%i]- ",i ,j);
            scanf("%i", &MatA[i][j]);
        }
    }
    
    printf("The matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i ", MatA[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}