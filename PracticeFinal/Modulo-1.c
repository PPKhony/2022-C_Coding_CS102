/*
0011 จงเขียนโปรแกรมรับจำนวนเต็ม 10 ค่า จากนั้นทำการ modulo จำนวนทั้งสิบด้วย 42 และแสดงผลเป็นจำนวน
แบบของเศษที่เหลือจากการ modulo ด้วย 42 ที่ไม่ซ้ำกัน
*/
#include <stdio.h>
#define SIZE 10

int Arr[SIZE];
int Cnt[42] = {};
int i;
int count = 0;

int main()
{
    int index;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%i", &Arr[i]);
        index = Arr[i] % 42;
        Cnt[index] = 1;
    }

    for (i = 0; i < 42; i++)
    {
        if (Cnt[i] == 1)
        {
            count ++;
        }
    }
    printf("%i \n",count);
    return 0;
}

/*
1
2
3
4
5
6
7
8
9
10
Output: 10
*/