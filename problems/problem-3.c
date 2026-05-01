// Write a function that takes a number and returns its factorial (5! = 5×4×3×2×1)
#include <stdio.h>

void factorial()
{
    int num;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        fact*=i;
    }
    printf("%d! = %d", num, fact);
}

int main()
{
    factorial();
    return 0;
}