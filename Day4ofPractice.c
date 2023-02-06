#include<stdio.h>

//Write a function to reverse an array

void reverse(int arr[], int n)           //function to reverse an array
{
    for (int i = 0; i < n/2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
}

void printArr(int arr[] , int n)        // Function to print that array
{
     for(int i  = 0 ; i < n ; i++){
        printf("%d\t" , arr[i]);
     }
     printf("\n");
}

int main(void)
{
     int arr[] ={1,2,3,4,5};
     reverse(arr , 5);
     printArr(arr , 5);
}