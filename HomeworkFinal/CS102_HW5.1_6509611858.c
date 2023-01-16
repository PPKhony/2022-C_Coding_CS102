/*
Author : Praphon Khaosaard
StudentID : 6509611858 
*/

#include<stdio.h>
int i,j;
int m[4][4];

// i = row , j = column

void MagicSquare();

void MagicSquare() {
    int MagicSquareA = 0;
    int MagicSquareB = 0;

    for (i = 0; i < 4; i++)
    {
        MagicSquareA += m[i][i];
    }
    for (i = 0; i < 4; i++)
    {
        j = 3 - i;
        MagicSquareB += m[i][j];
    }
    printf("The sum of first diagonal: %i \n", MagicSquareA);
    printf("The sum of second diagonal: %i \n", MagicSquareB);

    if (MagicSquareA == MagicSquareB)
    {
        printf("It is a magic square \n");
    } else {
        printf("It is not a magic square \n");
    }

}

int main() {
    printf("The array 4x4: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%i", m[i][j]);
        }
    }

    MagicSquare();
    return 0;
}