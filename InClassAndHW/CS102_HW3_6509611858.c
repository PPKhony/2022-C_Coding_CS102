#include<stdio.h>

int main() {
int number,checker,mod,error;
int i;
checker = 0;

while(checker == 0) {
    printf("Please enter an integer between 3-50000:");
    scanf("%i", &number);
    if(number >=3 && number<=50000) {
        checker = 1;
    } else {
        checker = 0;
        printf("Invalid Input!! \n");
    }
}

i = 2;
while(i != number+1 && mod != 0) {
    mod = number%i;

    if (mod == 0 && i != number){
        printf("%i is not a prime number \n", number);
    }
    else;
    if (i == number) {
        printf("%i is a prime number \n", number);
    } else;

    i++;
}

return 0;
}

