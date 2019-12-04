// Swap two numbers without third variable. 

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("------------Before Swapping---------");
    printf("\nThe value of a : %d", a);
    printf("\nThe value of b : %d", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n------------After Swapping---------");
    printf("\nThe value of a : %d", a);
    printf("\nThe value of b : %d", b);
    printf("\n");
    return 0;
}