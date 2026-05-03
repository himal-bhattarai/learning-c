// Write a function that checks if a number is prime (divisible only by 1 and itself)
#include<stdio.h>

void check_prime()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int is_prime = 1;  // assume prime

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;  // found a divisor → not prime
            break;         // no need to check further
        }
    }

    if (is_prime == 1)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);
}

int main(){
    check_prime();
    return 0;
}