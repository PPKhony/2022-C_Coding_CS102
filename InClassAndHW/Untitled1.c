#include<stdio.h>
int main() {
int x,i,a,b;
do{
printf("Enter a positive integer: ");
scanf("%i", &x);

if(x<=0){
    printf("Please Check your integer \n");
} else;

}
while(x<0);

b = 0;

for(i=0;i<x;i++) {
    b++;

    for (a=0;a<b;a++){
        printf("@");
    }

    printf("\n");
}


return 0;
}
