// Find Largest Number Using Pointers
#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 7, 89, 23};
    int *ptr = arr;

    int largest = *ptr;

    for (int i = 1; i < 5; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    printf("Largest = %d", largest);

    return 0;
}