#include<stdio.h>

void bubble_sort(int arr[], int n){
    int round, i, temp;
    for ( round = 0; round <= n - 1; round++)
    {
        for ( i = 0; i < n - 1 - round; i++)
        {
            if(arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        
    }
    
}


int main(){
    int arr[] = {34, 15, 29, 8, 45, 100, 86, 1, 2};
    int i;
    bubble_sort(arr, 9);
    for ( i = 0; i <= 8; i++)
    {
        printf("%d, ", arr[i]);
    } 
    return 0;   
}   

