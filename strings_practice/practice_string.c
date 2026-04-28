/*
Practice Problems 🎯

1. Ask the user to enter their name and print "Hello, [name]!"
2. Count how many characters are in a string without using strlen()
3. Check if two strings are equal using strcmp()
4. Join a first name and last name into a full name using strcat()
*/

#include <stdio.h>
#include <string.h>

// problem no. 1
void print_username()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s\n", name);
    printf("Hello, %s!\n", name);
}

// problem no. 2
void char_counter()
{
    char name[] = "himal";
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    printf("the length of the string is %d\n", count);
}

// problem no. 3
void compare_str()
{
    char a[] = "apple";
    char b[] = "apple";
    if (strcmp(a, b) == 0)
    {
        printf("Strings are equal!\n");
    }
}

void join_name()
{
    char fname[20] = "Himal ";
    char lname[20] = "Bhattarai";
    strcat(fname, lname);
    printf("Full Name: %s\n", fname);
}

int main()
{
    print_username();
    char_counter();
    compare_str();
    join_name();
    return 0;
}