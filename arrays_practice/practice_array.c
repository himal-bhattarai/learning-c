/*
Practice Problems 🎯
1. Store 5 numbers in an array and print them all
2. Find the largest number in an array
3. Find the sum and average of an array of 5 numbers
4. Reverse and print an array — without using a second array
*/

#include <stdio.h>
int find_largest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

float find_avg(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

void print_reverse(int arr[], int size)
{
    printf("\nreverse array\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int num[] = {33, 12, 8, 78, 54};
    // problem no. 1
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
    }

    // problem no. 2
    int largest = find_largest(num, 5);
    printf("largest %d\n", largest);

    // problem no. 3
    float average = find_avg(num, 5);
    printf("sum=%d\n", average * 5);
    printf("the avg of the array is %.2f\n", average);

    // problem no. 4
    print_reverse(num, 5);

    return 0;
}