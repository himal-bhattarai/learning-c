// Write a function that takes an array and prints only the odd numbers
#include<stdio.h>

void print_odd(){
    int arr[5]={3,4,8,55,34};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
        
    }
    
}

int main(){
    print_odd();
    return 0;
}