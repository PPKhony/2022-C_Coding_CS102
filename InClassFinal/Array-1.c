#include<stdio.h>

int main() {
    int age,students,sum;
    float avg;
    int i;
    printf("How many student : ");
    scanf("%i",&students);

    int student[students]; //ประกาศให้เหลือแต่อย่าให้ขาด
    sum = 0;

    for(i=0;i<students;i++){
        printf("Enter student ages: ");
        scanf("%i", &age);
        sum += age;
        student[i] = age;
    }

    avg = (float)sum / (float)students;

    printf("The avg of student age is : %f \n", avg);
    printf("Ages less than the average are: \n");
    
    for (i=0;i<students; i++)
    {
        if(student[i]<avg) {
            printf("No %i: ", i+1);
            printf("%i\n",student[i]);
        }
    }
    return 0;
}