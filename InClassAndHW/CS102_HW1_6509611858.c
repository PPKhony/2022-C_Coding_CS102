#include <stdio.h>
    int main() {
        float feet, inch, cmf, cmi, total;
        printf("How height are you (in feet and inches):");
        scanf("%f%f",&feet ,&inch);
        cmf = feet*30.48 ;
        cmi = inch*2.54 ;
        total = cmf + cmi; 
        printf("your height is %f centimeters \n" ,total);
        return 0;
    }
