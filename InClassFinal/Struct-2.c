#include<stdio.h>
#define MAXN 20

struct StudentRec{
    char lastname[30];
    float mark;
};

typedef struct StudentRec Student;

int main() {
    int count = 0;
    Student myclass[MAXN];
    
    int i;
    printf("How many students? ");
    scanf("%d", &count);

    if (count > MAXN)
    {
        printf("Not enought space \n");
        return(-1);
    }
    
    for (i = 0; i < count; i++)
    {
        printf("Enter lastname and mark: ");
        scanf("%s %f", myclass[i].lastname, &(myclass[i].mark) );
    }

    printf("\n My class list: \n\n");
    
    for (i = 0; i < count; i++)
    {
        printf("Last name : %s \n", myclass[i].lastname);
        printf("     Mark : %.1f \n\n" , myclass[i].mark);
    }

    return 0;
    
    
}