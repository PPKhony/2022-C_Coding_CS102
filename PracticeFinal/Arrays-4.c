#include<stdio.h>
int main() {
    int row, column; 
    row = 2;
    column = 2;

    int MatA[row][column];
    int i, j;
    int det;
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {   
            printf("element - [%i],[%i] :", i, j);
            scanf("%i", &MatA[i][j]);
        }
        
    }
    
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%i ", MatA[i][j]);
        }
        printf("\n");
    }
    
    det = (MatA[0][0]*(MatA[1][1]))  - ((MatA[1][0])*(MatA[0][1]));

    printf("The Det of Matrix is: %i ", det);
    
    
}