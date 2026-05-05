// Write a function that takes an array and rotates it by one position to the left — {1,2,3,4,5} → {2,3,4,5,1}
#include<stdio.h>

void rotate_arr(){
    int arr[5]={1,2,3,4,5};
    int first = arr[0];

    for (int i = 0; i < 4; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[4]=first;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
      
}

int main(){
    rotate_arr();
    return 0;
}