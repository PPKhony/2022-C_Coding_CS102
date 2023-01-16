#include<stdio.h>

int main() {
    int row, column; 
    printf("Input Number of Rows for the matrix :");
    scanf("%i", &row);

    printf("Input Number of Columns for the matrix :");
    scanf("%i", &column);

    int MatA[row][column];
    int i, j;
    int det;
    printf("enter your matrix (%ix%i): \n", row, column);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {   
            scanf("%i", &MatA[i][j]);
        }
        
    }
    printf("\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%i ", MatA[i][j]);
        }
        printf("\n");
    }

    printf("Transapose Matrix is: \n");
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%i ", MatA[j][i]);
        }
        printf("\n");
    }
    
}