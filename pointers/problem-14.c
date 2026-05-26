// Find Smallest Number in Array Using Pointers
#include <stdio.h>

int main()
{
    int arr[] = {45, 12, 67, 8, 90};

    int *ptr = arr;
    int smallest = *ptr;

    for (int i = 1; i < 5; i++)
    {
        if (*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }

    printf("Smallest = %d", smallest);

    return 0;
}