#include<stdio.h>
int main() {
    FILE *Helloworld;

    Helloworld = fopen("Helloworld","r"); //ตรง helloworld สามารถใส่เป็น path ได้้
    if (Helloworld==NULL) //การตรวจสอบว่าไฟล์สามารถเปิดได้แบบปกติหรือไม่
    {
        printf("Error: Open file fail");
        return -1;
    }

    int i, age;
    int sum = 0;

   printf("Reading all student ages from a file \n");

   for (i = 0; i < 8; i++)
   {
    fscanf (Helloworld, "%i", &age);
    
    printf("%i ", age);
    sum += age;
   }

    printf("Sum is %i", sum);
    fclose(Helloworld);
    return 0;
}


