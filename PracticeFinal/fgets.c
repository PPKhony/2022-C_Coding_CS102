#include<stdio.h>
#include<string.h>

int main() {
char str1[200];

printf("Please enter your string: ");
int i = 0;

fgets (str1,200,stdin); //fgets arrayofChar , max lenght , stream //คือรับมาจาก keyboard เป็น reserve word

int len;
len = strlen(str1);

int count = 0;

for(int i=0;i<len;i++){

    if(str1[i]=='t') {
        if(str1[i+1]=='h'){
            if(str1[i+2]=='e'){
                if(str1[i+3]==' '||str1[i+3]=='\0') {
                    count++;
                }
            }
        }
    }
}

printf("the frequency of the word 'the' is : %i",count);

return 0;
}
