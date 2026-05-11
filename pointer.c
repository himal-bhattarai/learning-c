// A pointer is a variable that stores the memory address of another variable.
#include <stdio.h>

int main()
{
    int num = 10;
    int *p;
    p = &num;

    printf("%d\n", num); // 10  (the value)
    printf("%p\n", &p); // 0x61ff04 (the address)
    printf("%d\n", *p); // 10  (value AT the address)
    return 0;
}