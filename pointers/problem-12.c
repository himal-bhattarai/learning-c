// Print Array Using Only Pointers
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    while (ptr < arr + 5)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}