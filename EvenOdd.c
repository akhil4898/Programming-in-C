// Check Even number without % operator

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number to check wheather it is even or odd : ");
    scanf("%d", &number);
    if (number & 1)
        printf("Number is odd!!\n");
    else
        printf("number is even!!\n");
    return 0;
}