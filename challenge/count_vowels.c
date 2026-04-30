// Write a function that counts vowels in a string (a, e, i, o, u)

#include <stdio.h>
#include <string.h>

void count_vowel()
{
    char name[20];
    int count = 0;
    printf("Enter your name: ");
    scanf("%s", &name);

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
    }
    printf("Number of volwel in the string is %d", count);
}

int main()
{
    count_vowel();
    return 0;
}