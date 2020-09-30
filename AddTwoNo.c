//ADDING TWO NUMBER

#include<stdio.h>
int main(){
    int Firstno, Secondno, Sum;
    printf("Enter the value of First number = \n");
    scanf("%d", &Firstno);
    printf("Enter the value of Second number = \n ");
    scanf("%d", &Secondno);
    Sum = Firstno + Secondno;
    printf("Sum of %d + %d = %d\n", Firstno, Secondno, Sum);
    return 0;
}
