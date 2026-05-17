// Count Vowels in a String Using Pointers
#include <stdio.h>

int main()
{
    char str[] = "Hello World";
    char *ptr = str;

    int vowels = 0;

    while (*ptr != '\0')
    {
        char ch = *ptr;

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            vowels++;
        }

        ptr++;
    }

    printf("Vowels = %d", vowels);

    return 0;
}