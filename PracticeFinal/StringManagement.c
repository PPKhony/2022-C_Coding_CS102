#include<stdio.h>
#include<string.h>
int main() {
    char str1[10] = "Payut ";
    char str2[15] = "ChanOCha";
    char str3[10];

    // 1 String copy 
    strcpy(str1, "Pawit ");
    printf("%s \n", str1);
    
    // 2 strcat 
    strcat(str1,str2);
    printf("%s \n", str1);

    // 3 strlen //รวมช่องว่างด้วย ระวัง
    int len = strlen(str1);
    printf("%i \n", len);
    return 0;

    int cmp = strcmp(str1,str2);
    printf("%i \n", cmp);

    return 0;
}