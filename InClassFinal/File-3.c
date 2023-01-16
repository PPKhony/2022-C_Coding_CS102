#include<stdio.h>
int main() {
    FILE *Helloworld;

    Helloworld = fopen("Hello world","w"); //ตรง helloworld สามารถใส่เป็น path ได้้
    if (Helloworld==NULL) //การตรวจสอบว่าไฟล์สามารถเปิดได้แบบปกติหรือไม่
    {
        printf("Error: Open file fail");
        return -1;
    }
    
    fprintf(Helloworld, "Hello world");
    
    fclose(Helloworld);
    return 0;
}

