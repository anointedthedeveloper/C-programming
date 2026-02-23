#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100];
    int vowcnt = 0;
    int i;

    printf("Enter a word: ");
    scanf("%99s", word);   // Prevent buffer overflow

    for (i = 0; word[i] != '\0'; i++)
    {
        char ch = tolower(word[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            vowcnt++;
        }
    }

    printf("\nThe word is: %s", word);
    printf("\nNumber of vowels: %d\n", vowcnt);

    return 0;
}