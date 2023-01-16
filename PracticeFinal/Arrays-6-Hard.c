/*
- จงเขียนโปรแกรมรับเมทริกซ์ขนาด m x n และให้ Scale ค่าภายในเมทริกซ์นั้นให้มีค่าอยู่ระหว่าง 0-1 โดยขนาดของเมทริกซ์จะต้องไม่เป็น 1x1 เช่น
2
2
a
b
c
d
a b
c d

- รูปเเบบ Input

บรรทัดแรก m เป็นจำนวนหลัก
บรรทัดสอง n เป็นจำนวนแถว
บรรทัด m x n ต่อไป เป็นค่าประจำตำแหน่ง

- รูปเเบบ Output

แสดง Matrix เป็นค่าที่ถูก scaled 0-1 แล้ว โดยแต่ละค่าให้แสดงทศนิยม 4 ตำแหน่ง

- ข้อจำกัด

ค่า 0 < m,n < 100
*/

#include<stdio.h>
int main() {
    int m, n;
    do {
   
    scanf("%i \n", &n);
    scanf("%i \n", &m);
    } while ((n<=1&&n>100)&&(m<=1&&m>100));

    int i, j;
    float MatA[99][99];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &MatA[i][j]);
            
        }
    }
    
    float min = 9999999.99;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {   
            if ( min > MatA[i][j]){
                min = MatA[i][j];
            } else; 
        }
    }
    
    float MatB[n][m];
    
   float max = min;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            MatB[i][j] = MatA[i][j] - min;
            
            if(MatB[i][j]>max){
                max = MatB[i][j];
            }
        }
    }
    
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            MatB[i][j] /=  max;
            printf("%.4f ", MatB[i][j]);
        }
        printf("\n");
    }
}
2
2
1
50
75
100.1


