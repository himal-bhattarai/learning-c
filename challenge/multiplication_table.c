// Write a function that prints the multiplication table of a given number (1 to 10)
#include<stdio.h>

void multi_table(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
}

int main(){
    multi_table();
    return 0;
}