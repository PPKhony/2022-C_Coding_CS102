#include<stdio.h>
int main() {
    FILE *file_2;
    file_2 = fopen("file_2","r");

    char lineA[15];
    char lineB[15];
    char lineC[15];
    fscanf(file_2,"%s",lineA);
    fscanf(file_2,"%s",lineB);
    fscanf(file_2,"%s",lineC);

    printf("%s \n",lineA);
    printf("%s \n",lineB);
    printf("%s",lineC);
}