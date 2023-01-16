/*
Permutation Solution
อันนี้ค่อนข้างยากเนื่องจากต้องเรียนรู้วิธีการ
*/

#include <stdio.h>
#include <string.h>
int lenght;

void GetAlphabet();
int GetLenght();

int main()
{
    int lenght = GetLenght();
    char s[lenght + 1];
    GetAlphabet(s, lenght);
    printf("%s", s);
    return 0;
}

int GetLenght()
{
    float lenght;
    do
    {
        printf("Enter your alphabet number (Interger): ");
        scanf("%f", &lenght);
        if(lenght != (int)lenght) lenght = 0;
        if (lenght > 0)
        {
            return (int)lenght;
        } 
        else 
        {
            printf("Invalid Input \n");
        }
    } while (lenght<=0);
}

void GetAlphabet(char s[], int lenght)
{
    int j = 0;

    do
    {
        if (j == 1)
        {
            printf("You alphabet is exceed than %i character \n", lenght);
        }
        else
            ;

        printf("Enter your string: \n");
        scanf("%s", s);

        j = 1;

    } while (strlen(s) > lenght);
} 