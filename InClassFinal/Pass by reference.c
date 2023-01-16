#include<stdio.h>
void Swap(int *x, int *y) { //รับค่า adress เข้ามา
    int z;
    z = *x; // z มีค่าเท่ากับตัวแปรตัวที่ a ชี้ไป
    *x = *y; // ตัวแปรที่ x ชี้ไป มีค่าเท่ากับ ตัวที่ b ชี้ไป
    *y = z; // ตัวแปรที่ y ชี้ไปมีค่าเท่ากับ z 
}

int main() {
    int x,y,z ;
    z = 0;
    printf("Enter 2 integers x and y:");
    scanf("%i%i",&x,&y);
    printf("x is %i and  y is %i \n",x ,y);
    Swap(&x, &y); //ส่ง Adress ไป functon swop 
    printf("After swopping, x is %i, and y is %i \n", x, y);

    return 0;
}
//สามารถ improve โดยการ สร้าง function