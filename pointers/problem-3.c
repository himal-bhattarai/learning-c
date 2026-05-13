#include<stdio.h>
// ✅ This DOES change num in main
void add_ten(int *n)
{
    *n = *n + 10;  // changes value at address
}

int main()
{
    int num = 10;
    add_ten(&num);  // pass address of num
    printf("%d\n", num);  // 20 ✅
    return 0;
}