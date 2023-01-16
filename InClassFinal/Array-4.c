#include<stdio.h>
int main() {
    int i;
    char name[10];
    int len;
    printf("What is your name? : ");
    scanf("%s",name); //array ทั้งก้อนไม่ต้องมี & นำหน้า
    printf("%s \n",name);
    
    //lenght of word 
    i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    
    printf("Your name has %i characters \n", i);
    return 0;
}