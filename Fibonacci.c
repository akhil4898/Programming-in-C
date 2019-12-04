// Fibonacci series without using recursion.

// #include <stdio.h>

// int main()
// {
//     int n1 = 0, n2 = 1, n3, i, number;
//     printf("Enter the number of elements : ");
//     scanf("%d", &number);
//     printf("%d, %d", n1, n2);
//     for (i = 2; i < number; i++)
//     {
//         n3 = n1 + n2;
//         printf(", %d", n3);
//         n1 = n2;
//         n2 = n3;
//     }
//     printf("\n");
//     return 0;
// }

// Fibonacci series with using recursion.

#include <stdio.h>

void Fibonacci(int n)
{
    if (n > 0)
    {
        static int n1 = 0, n2 = 1, n3;
        n3 = n1 + n2;
        printf(", %d", n3);
        n1 = n2;
        n2 = n3;
        Fibonacci(n - 1);
    }
}

int main()
{
    int number;
    printf("Enter the number of elements :");
    scanf("%d", &number);
    printf("%d, %d", 0, 1);
    Fibonacci(number - 2);
    printf("\n");
    return 0;
}