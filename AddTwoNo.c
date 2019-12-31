#include<stdio.h>
int main(){
    int Firstno, Secondno, Sum;
    printf("Enter the value of First number = ");
    scanf("%d", &Firstno);
    printf("Enter the value of Second number = ");
    scanf("%d", &Secondno);
    Sum = Firstno + Secondno;
    printf("Sum of %d + %d = %d\n", Firstno, Secondno, Sum);
    return 0;
}