#include<stdio.h>
int main(){
    char sex;
    printf("Enter your sex (M/F): ");
    scanf("%c", &sex); 
    
    if (sex == 'M') {
        printf("Hello male"); //M/female
    } else if (sex == 'F') {  
        printf("Hello female"); //default
    } else {
        printf("Invalid sex"); //printf error message here 
    }
}