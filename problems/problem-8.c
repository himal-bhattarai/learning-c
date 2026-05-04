// Write a function that takes a string and counts how many words are in it — hint: count spaces + 1
#include<stdio.h>
#include<string.h>

void count_words(){
    char str[50]="hello welcome to C programming";
    int space = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]==' ')
        {
            space++;
        }
        
    }
    printf("Number of words: %d", space+1);
}

int main(){
    count_words();
    return 0;
}