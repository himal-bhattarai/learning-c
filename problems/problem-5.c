// Write a function that takes two arrays and merges them into one array
#include <stdio.h>

void merge()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int merged[10];

    for (int i = 0; i < 5; i++)
    {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        merged[i + 5] = arr2[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", merged[i]);
    }
}

int main()
{
    merge();
    return 0;
}