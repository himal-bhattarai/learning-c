// Write a function that checks if a string is a palindrome (same forwards and backwards — like "madam")

#include <stdio.h>
#include <string.h>

void palindrome_check()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);  // no & needed for arrays!

    int start = 0;
    int end = strlen(name) - 1;

    while (start < end)
    {
        if (name[start] != name[end])
        {
            printf("not a palindrome\n");
            return;
        }
        start++;
        end--;
    }
    printf("is a palindrome\n");
}

int main()
{
    palindrome_check();
    return 0;
}