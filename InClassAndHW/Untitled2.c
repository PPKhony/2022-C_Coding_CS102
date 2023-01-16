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

for(a=x;a>=1;a--)

    {
    for(b = 1;b<=a;b++){
        printf("@");
    }

    printf("\n");
    b--;
}

return 0;
}
