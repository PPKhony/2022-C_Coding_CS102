#include<stdio.h>
void myFunction(char name[], int age) {
    printf("Hello %s You are age: %i \n", name, age);
}

int ReturnValue(int x) {
    return 3 + x;
}

int main() {
    int i;
        myFunction("Lisa", 15);
        myFunction("Jobby", 20);
        printf("This value is %i", ReturnValue(5));
    return 0;
}