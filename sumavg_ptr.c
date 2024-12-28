/*Q. WRITE A PROGRAM TO FIND THE SUM AND AVARAGE OF n NUMBERS USING TWO DIFFERENT FUNCTIONS SEPARATE FOR EACH AS INPUT BY THE USER ..USE FUNCTIONS AND POINTERS..
also show the memory address while functions were doing sum and avarage*/



#include <stdio.h>

int* sum(int *, int);

float* avg(int *, int);
// Calculating sum
int* sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("the sum of the elements is : %d\n", sum);
    int *ptr = &sum;
    return ptr;
}
// Calculating avarage

float* avg(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
   float avarage= (float)sum / n;
    printf("the average of the elements is : %.2f\n", avarage);
   float* ptr = &avarage;
   return ptr;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
   
    printf("The address of sum and avarage while running the functions are: %p  and  %p \n", sum(arr, n), avg(arr, n));
    return 0;
}