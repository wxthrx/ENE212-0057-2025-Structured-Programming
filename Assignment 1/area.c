#include <stdio.h>
#include <stdlib.h>

int main(){
    //variable declaration
    double radius;
    double pi = 3.142;
    double area;

    //Capture input from user
    printf("What is the radius of the sphere?");
    if (scanf("%lf", &radius) != 1){
        printf("Invalid number!\n");
        return 1;
    }
    area = pi*4*radius*radius;
    printf("Area : %.2f", area);
return 0;
}
