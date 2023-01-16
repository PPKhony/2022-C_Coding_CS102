#include<stdio.h>
int main() {
    printf("Enter member of 2x4 matrix A: \n");
    int i,j;
    int MatA[2][4];
    int MatB[2][4];
    int MatC[2][4];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%i", &MatA[i][j]);
        }
    }

    printf("Enter member of 2x4 matrix B: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%i", &MatB[i][j]);
        }
    }

    printf("The summation matrix C is: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            MatC[i][j] = MatA[i][j] + MatB[i][j];
            printf("%i ", MatC[i][j]);
        }
        printf("\n");
    }
    return 0;
}