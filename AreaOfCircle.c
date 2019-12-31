#include<stdio.h>
#define PI 3.14
int main(){
    float radius, Area;
    printf("Enter the value of radius = ");
    scanf("%f", &radius);
    Area = PI * radius * radius;
    printf("Area of circle is = %f\n", Area);
    return 0;
}