// To check wheather the number is prime or not.

#include <stdio.h>

int main()
{
    int number, flag = 0, i;
    printf("Enter a number to check wheather it is prime or not : ");
    scanf("%d", &number);
    for (i = 2; i <= number - 1; i++)
    {
        if (number % i == 0)
        {
            printf("Number is not Prime!!\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Number is Prime!!");
    return 0;
}