/*
การทำแม่สูตรคูณ
*/
#include<stdio.h>
FILE * fptr; // ขั้นตอน ที่ 1


void timetable(int start) {
    for (int i = 1; i <= 12; i++)
    {
        fprintf(fptr,"%i x %i = ", start , i );
        fprintf(fptr,"%i \n", start*i);
    }
    for (int i = 0; i < 30; i++)
        {
            fprintf(fptr,"-");
        }
        fprintf(fptr,"\n");
    
}

int main() {
    /*---*/
    fptr = fopen("multiTable2to20.txt","w"); //ขั้นตอนที่ 2
    for (int i = 2; i <= 50000; i++)
    {
        fprintf(fptr,"Time table %i \n", i); //ขั้นตอนที่ 3
        timetable(i);
    }
    fclose (fptr); //ขั้นตอนที่ 4
    /*---*/

    printf("File write finish ^ ^ ");
    return 0;
}
