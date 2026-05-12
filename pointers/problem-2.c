// Changing value through pointer
#include <stdio.h>

int main()
{
    int num = 10;
    int *p = &num;

    *p = 99;  // change value AT the address

    printf("%d\n", num);  // 99 — num changed!

    return 0;
}