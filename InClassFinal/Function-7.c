#include<stdio.h>
    int i,j;
    int MatA[2][4];
    int MatB[2][4];
    int MatC[2][4];

void GetMatrix(int Arr[][4], int rows, int cols) { //ต้องประกาศมิติที่ 2
    for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                scanf("%i", &Arr[i][j]);
            }
        }
}

void PrintMatrix (int Arr[][4], int rows, int cols) {
    for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                printf("%i ", Arr[i][j]);
            }
            printf("\n");
        }
}

int main() {
    printf("Enter member of 2x4 matrix A: \n");
    GetMatrix(MatA,2,4);
    printf("Enter member of 2x4 matrix B: \n");
    GetMatrix(MatB,2,4);
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            MatC[i][j] = MatA[i][j] + MatB[i][j];
        }
        
    }

    printf("The summation matrix C is: \n");
    PrintMatrix(MatC,2,4);
    
    return 0;
}
/*
อาจลองไปเขียนเป็น pointer ดู
*/