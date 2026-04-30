// Write a program that asks the user to enter 5 numbers, stores them in an array, then prints the sum, average, largest and smallest

#include <stdio.h>

int find_sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

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


int find_smallest(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
        
    }
    return smallest;
}

int main()
{
    int num[5];
    printf("Enter five numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    int size = 5;

    int sum = find_sum(num, size);
    printf("The sum of the array is %d\n", sum);

    float avg = sum / size;
    printf("The average of the array is %.2f\n", avg);

    int largest = find_largest(num, size);
    printf("The largest number in the array is %d\n", largest);

    int smallest = find_smallest(num, size);
    printf("The smallest number in the array is %d\n", smallest);

    return 0;
}