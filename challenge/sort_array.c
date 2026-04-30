// Write a function that takes an array of 5 numbers and sorts them smallest to largest

#include <stdio.h>

void sort()
{
    int arr[5] = {33, 12, 8, 78, 54};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    sort();
    return 0;
}