// Write a function that takes an array and returns how many numbers are even

#include <stdio.h>

int check_even(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int num[] = {10, 23, 45, 56, 9};
    int count = check_even(num, 5);
    printf("There are %d even number",count);
    return 0; 
}