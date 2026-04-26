// A function is a reusable block of code that does a specific job.
#include <stdio.h>
void greet_user(char name[])
{
    printf("hello, %s!\n", name);
}

void add(int a, int b)
{
    int sum = a + b;
    printf("sum = %d", sum);
}

int main()
{
    greet_user("himal");
    add(5, 7);
    return 0;
}