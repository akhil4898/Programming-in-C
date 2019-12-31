// // // #include <stdio.h> /* This is a header file. */
// // // #include<stdlib.h>

// // // // void EnterName(char b[20])
// // // // {   
// // //     // printf("Enter your name = ");
// // //     // scanf("%s", b);
// // // // }
// // // int main()
// // // { /* This is a main function. */
// // //     int a;
// // //     char b[20];                         /* This is declaration of variable. */
// // //     printf("Enter the Uni.Roll-no = "); /* This is a printf function to print the output on the console screen. */
// // //     scanf("%d", &a);                    /* This is the scanf function to scan the value from the user. */
// // //     // EnterName(b);
// // //     printf("Enter you name : ");
// // //     gets(b);
// // //     printf("The Uni.Roll-no is = %d \n", a); /* This is the printf function to print the output on the conso;e screen.  */
// // //     printf("The name you entered is %s \n", b);
// // //     return 0; /* This is return statement to return something according to the type of main function. */
// // // }

// // #include<stdio.h>
// // int main() 
// // { 
// //     char name[50]; 
// //     gets(name); 
// //     printf("Entered name: %s", name); 
// // } 

// #include <stdio.h>  
  
// int main() 
// { 
//     char name[50]; 
//     gets(name); 
//     printf("Entered name: %s", name); 
// } 

#include <stdio.h> 
  
// function to return sum of elements 
// in an array of size n 
int sum(int arr[], int n) 
{ 
    int sum = 0; // initialize sum 
  
    // Iterate through all elements  
    // and add them to sum 
    for (int i = 0; i < n; i++) /* This is the for loop. */
    sum += arr[i]; 
  
    return sum; 
} 
  
int main() 
{ 
    int arr[] = {12, 3, 4, 15}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Sum of given array is %d\n ", sum(arr, n)); 
    return 0; 
} 