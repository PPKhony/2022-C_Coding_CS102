#include<stdio.h>

int Square(float width, float height) {
    float Area;
    Area = width*height;
    printf("This Rectangle Area is : %f \n", Area);
}

int main() {    
    int i;
    for(i=1;i<=3;i++){
        Square(i,i+3);
        //ทดสอบ github
    }   
}