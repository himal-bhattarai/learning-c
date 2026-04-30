// Write a function that takes a string and reverses it without using any library function

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);

    int start = 0;
    int end = strlen(name) - 1;

    while (start < end)
    {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++;
        end--;
    }

    printf("Reversed: %s\n", name);
    return 0;
}