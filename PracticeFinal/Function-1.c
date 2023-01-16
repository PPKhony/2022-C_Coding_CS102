#include<stdio.h>
void myFunction() {
    printf("Hello world \n");
}

/*
myFunction() - is the name of the function
void - means that the function does not have a return value. You will learn more about return values later in the next chapter
*/

int main() {
    int i;
    for(i=1;i<5;i++){
        myFunction();
    }
    return 0;
}