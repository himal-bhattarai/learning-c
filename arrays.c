/*
What is an Array?
An array is a collection of multiple values of the same type stored under one variable name.
*/
#include <stdio.h>

// array + function

int arr_sum(int arr[], int arr_size)
{
    int sum = 0;
    for (int i = 0; i < arr_size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int arry[] = {10, 20, 30, 40, 50};
    int total = arr_sum(arry, 5);
    printf("the total sum of the array is %d", total);

    int num[5] = {5, 6, 7, 8, 9};
    // int num[]={5, 6, 7, 8, 9}; this is also valid syntax; size is automatically set 5

    // modifying array
    num[4] = 19;

    printf("%d\n", num[1]); // this print 6

    // looping through array
    for (int i = 0; i < 5; i++)
    {
        printf("%d", num[i]);
    }

    return 0;
}

/*
Quick Summary
Concept                 Example
------------------------------------------------------
Declare                 int nums[5];
Initialize              int nums[] = {1, 2, 3};
Access                  nums[0]
First index             always 0
Last index              always size - 1
Loop through            for (int i = 0; i < size; i++)
*/