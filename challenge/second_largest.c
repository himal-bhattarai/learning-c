// Write a function that takes an array and returns the second largest number

#include <stdio.h>

int second_largest()
{
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

// 33 12 8 78 54
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    printf("%d", second);
}

int main()
{
    second_largest();
    return 0;
}