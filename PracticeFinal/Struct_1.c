/*
สร้าง struct ร้านค้าที่ประกอบไปด้วย 
ราคา
ชื่อสินค้า
จำนวนที่
ชนิดสินค้า
วันผลิต

และแสดงผลออกมาเป็น record
*/
#include<stdio.h>
#define SIZE 3
struct Goods
{
    int no;
    char name[20];
};
int i;
typedef struct Goods goods;

int main() {
for (i = 0; i < SIZE; i++)
{
    goods goods_1[SIZE];
    goods_1[i].no = i;
    
}



}