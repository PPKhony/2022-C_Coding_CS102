#include<stdio.h>
int main() {
    FILE *file_1;
    file_1 = fopen("file_1","w");
    if (file_1==NULL)
    {
        printf("Error: Open file fail");
        return -1;
    }
    
    fprintf(file_1, "The file test.txt created successfully...!!");

    fclose(file_1);
    return 0;

}