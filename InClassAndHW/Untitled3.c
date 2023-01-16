#include<stdio.h>
int main() {

int i;
float student;
float age, sum;
float avg;

sum = 0;

printf("How Many Student? ");
scanf("%f", &student);

for(i=0;i<student;i++) {
printf("Enter ages: ");
scanf("%f", &age);
sum = age + sum;
}

avg = sum/student;
printf("This average is: %.2f", avg);
return 0;
}
