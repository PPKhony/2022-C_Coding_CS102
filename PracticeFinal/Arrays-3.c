#include<stdio.h>
int main() {
    int row, column; 
    printf("Input Number of Rows for the matrix :");
    scanf("%i", &row);

    printf("Input Number of Columns for the matrix :");
    scanf("%i", &column);

    int MatA[row][column];
    int i, j;
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
    
    
}