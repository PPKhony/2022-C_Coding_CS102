#include<stdio.h>
#include<string.h>

int main() {
    struct student { //กำหนด คุณสมบัติ
        char ID[12];
        char name[50];
        float GPA;
    } ;

    struct student stu1, stu2; //กำหนดลักษณะของก้อนแบบละเอียด
    
    int num;
    num = 77;
    stu1.GPA = 3.5;
    stu2.GPA = stu1.GPA-0.3;

    strcpy(stu1.ID, "6509611588");
    strcpy(stu2.ID, "1234567890");

    printf("%s \n", stu1.ID); //อย่าลืม %s
    printf("Hello world");
}