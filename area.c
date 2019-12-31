    /*Program to calculate the areas of circles, using a while loop; number of circles is unspecified */
#include<stdio.h>
#define PI 3.14159
float process(float radius);  /* Function declaration*/
void main(){
    float radius, area; /* Variable declaration */
    printf("To Stop, Enter 0 for the radius \n ");
    printf("\n Enter Radius = ? ");
    scanf("%f", &radius);
    while(radius != 0){
        if (radius < 0){
            area = 0;
        }
        else{
            area = process(radius);
        }
        printf("Area = %f\n", area);
        printf(" Thankyou for coming!!! \n");
        printf("\n Radius = ?");
        scanf("%f", &radius);
    }
    printf(" Thankyou for coming!!! \n");
}

float process(float r){  /* Function definition */
    float a;    /*Local variable declaration */
    a = PI * r * r;
    return(a);
}