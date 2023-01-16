#include<stdio.h>
int main() {
    char name[9];
    scanf("%s", name); //เราไม่ต้องใช้ & กับ array of char เท่านั้น
    printf("%s", name);

    //เราไม่สามารถทำกับ array ชนิดอื่นๆได้
    return 0;
}