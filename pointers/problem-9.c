// Copy One String to Another Using Pointers
#include <stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[20];

    char *src = str1;
    char *dest = str2;

    while (*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }

    *dest = '\0';

    printf("Copied String = %s", str2);

    return 0;
}