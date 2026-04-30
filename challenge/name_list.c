// Store 5 names in a string array and print them all

#include<stdio.h>

void name_list(){
    char name[5][20] = {"alice","joe","lucas","harry","himal"};

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",name[i]);
    }
    
}

int main(){
    name_list();
    return 0;
}