/*
Pass by reference + struct
*/

#include<stdio.h>
#define MAXN 20

struct StudentRec{
    char lastname[30];
    float mark;
};

typedef struct StudentRec Student;

int i;
int count = 0;
Student myclass[MAXN];
//Readrecord function
Student readRecord () {
    Student newStudent;
    printf("Enter last name and mark: ");
    scanf("%s %f", newStudent.lastname, &(newStudent.mark) );
    return newStudent;    
}

//Readstudent function
void readStudent(Student *item) {  
        printf("Enter lastname and mark: ");
        scanf("%s", (*item).lastname);
        scanf("%f", &((*item).mark) );
}

//Printrecord function
void printRecord(Student item) { //รับ Parameter StudentX
        printf("Last name : %s \n", item.lastname);
        printf("     Mark : %.1f \n\n" , item.mark);
}

int main() {
    //แบบ A
    Student studentA;
    studentA = readRecord(); 
    printRecord(studentA);

    //แบบ B
    Student studentB = {"Newton, 99.34"}; //default struct
    printRecord(studentB);

    //แบบ C
    Student studentC;
    readStudent(&studentC); //pass by refernce
    printRecord(studentC);
}