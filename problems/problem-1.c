// Write a function that counts how many spaces are in a string
#include <stdio.h>

void count_spaces()
{
    int count = 0;
    char name[40] = "himal bhattarai";
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            count++;
        }
    }
    printf("No. of space %d", count);
}

int main()
{
    count_spaces();
    return 0;
}