// Create a variable, a pointer to it, and print both the value and address

#include <stdio.h>

int main()
{
    int num = 10;
    int *p = &num;
    printf("%d\n", num);
    printf("%p\n", p);
    // printf("%d\n", *p);
    return 0;
}