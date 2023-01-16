#include<stdio.h>
int main() {

int i;
float student;
float age, sum;
float avg;

sum = 0;
student =0;

printf("Stop untill age = 0 \n");

for(i=0;i>=0;i++) {
printf("Enter ages: ");
scanf("%f", &age);
sum = age + sum;
student++;

if (age == 0){
    i = -2;
}

}


avg = sum/(student-1);
printf("This average is: %.2f", avg);
return 0;
}
