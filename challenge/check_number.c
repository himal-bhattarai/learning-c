// Write a function that takes a number and prints whether it is positive, negative or zero
#include <stdio.h>

void check_num(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num<0)
    {
        printf("The number is negative.");
    }else if(num>0){
        printf("The number is positive.");
    }else{
        printf("The number is zero.");
    }
    
}

int main(){
    check_num();
    return 0;
}