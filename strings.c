/*
What is a String?
A string is a sequence of characters. In C, a string is just an array of char with a special character \0 (null terminator) at the end that tells C where the string ends.

char name[] = "Alice";
// stored as: A  l  i  c  e  \0
// index:     0  1  2  3  4   5

Declaring a String
char name[] = "Alice";         // size auto-calculated
char city[10] = "London";      // size manually set
char grade = 'A';              // ⚠️ this is a single char, not a string

*/

#include <stdio.h>
// String Functions — <string.h>
#include <string.h>

void render_sting()
{
    char username[20];
    printf("enter your name: ");
    scanf("%s", username);
    printf("hi, %s!", username);
}

void loop_through_string(){
    char name[]="himal";
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c\n",name[i]);
    }
    
}

int main()
{
    char greet[20]="hello, ";
    char name[] = "himal";
    printf("%d\n", strlen(name)); // strlen() help to find the length of the string
    strcat(greet, name); // strcat() help to merge string and store the new value in first variable
    printf("%s\n", greet);
    loop_through_string();
    // render_sting();
    return 0;
}