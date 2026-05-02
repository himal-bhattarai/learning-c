// Write a function that takes a string and converts all letters to uppercase without <string.h> — hint: 'a' - 'A' = 32
#include <stdio.h>

void to_uppercase()
{
    char str[] = "himal";
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i]=str[i]-32;
    }
    printf("%s\n",str);
}

int main()
{
    to_uppercase();
    return 0;
}