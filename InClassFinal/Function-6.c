/*
เดียวไปเขียนเพิ่ม ทำความเข้าใจเพิ่ม
*/
#include<stdio.h>
void readVector (float Arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%f", &Arr[i]); 
    }

}
    void showVector (float Arr[], int size) {
        int i;
        for (i = 0; i<size; i++)
        {
            printf("%f", Arr[i]); 
        }
        printf("\n");
    }

int main() {
    int i;
    float A[5],B[5],C[5];
    printf("Enter  members of vector A: ");
    readVector (A,5);
    
    printf("Enter  members of vector B: ");
    readVector (A,5);

    printf("The summation vector C is: ");
    showVector (C,5);
    return 0;
}
/*
อาจลองไปเขียนเป็น vector ดู
*/