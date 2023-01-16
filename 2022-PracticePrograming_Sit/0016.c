#include <stdio.h>
#include <string.h>
int i;

char Adrian[100] = "ABC";
char Bruno[100] = "BABC";
char Goran[100] = "CCAABB";

void Ans(char Arr[], int size)
{
    int TEMP[size];
    int len = strlen(Arr);
    int j = 0;
    for (i = 0; i < size-len; i++)
    {
        Arr[i+len] = Arr[j];
        j++;
        if (j == len)
        {
            j = 0;
        }
    }
}

int compare(char Arr[], char sol[], int size)
{
    int count = 0;
    for (i = 0; i < size; i++)
    {
        if (Arr[i] == sol[i])
        {
            count++;
        }
    }
    return count; 
}

int maxy(int score[])
{
    int max = score[0];
    for (i = 0; i < 3; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
        }
    }
    return max;
}

void printscore(int score[], int max)
{
    int Arr[3];
    for (i = 0; i < 3; i++)
    {
        if (score[i] == max)
        {
            Arr[i] = 1;
            if (Arr[i] == 1)
            {
                switch (i)
                {
                case 0:
                    printf("Adrian \n");
                    break;
                case 1:
                    printf("Bruno \n");
                    break;
                case 2:
                    printf("Goran \n");
                    break;
                }
            }
        }
    }
}

int main()
{
    int size;
    char sol[100];

    scanf("%i", &size); //รับจำนวนคำถามทั้งหมด
    scanf("%s", sol);   //รับคำตอบ

    Ans(Adrian, size);
    Ans(Bruno, size);
    Ans(Goran, size);

    int score[3] = {compare(Adrian, sol, size),
                    compare(Bruno, sol, size),
                    compare(Goran, sol, size)};
    int max = maxy(score);

    printf("%i \n", max);
    printscore(score,max);
}