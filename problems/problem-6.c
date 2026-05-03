// Write a function that takes an array and removes duplicate numbers
#include <stdio.h>

void remove_duplicate()
{
    int arr[5] = {5, 9, 6, 4, 2};

    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)  // only print if it appears once
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    remove_duplicate();
    return 0;
}