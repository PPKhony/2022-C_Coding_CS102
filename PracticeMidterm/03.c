 #include<stdio.h>
int main() {
    int i;

    int yournumber[4];
    yournumber[0] = 25;
    yournumber[1] = 50;
    yournumber[2] = 75;
    yournumber[3] = 100;

    for(i=0;i<4;i++) {
        printf("%i\n",yournumber[i]);
    }
}