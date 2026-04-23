#include <stdio.h>
int main()
{
    int age = 20;
    float grade = 3.5;
    char name[] = "himal";

    printf("my name is %s\n", name);
    printf("i'm %d years old\n", age);
    printf("scored %f", grade);

    return 0;
}

/*
Key rule (very important in C)

%d → int
%f → float
%s → string (char[])
%c → char
*/