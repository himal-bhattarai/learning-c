// Write a function that takes two strings and checks if one is an anagram of the other — same letters different order like "listen" and "silent"
#include <stdio.h>
#include <string.h>

void check_anagram()
{
    char str1[] = "listen";
    char str2[] = "silent";

    if (strlen(str1) != strlen(str2))
    {
        printf("not anagram");
        return;
    }

    int count[26] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[str1[i] - 'a']++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        count[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("not anagram");
            return;
        }
    }
    printf("anagram!");
}

int main()
{
    check_anagram();
    return 0;
}