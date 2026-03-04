#include <stdio.h>
#include <string.h>

// Function declaration
int countCharOccurrences(char str[], char ch);

int main() {
    char str[100];   // character array for string
    char ch;         // character variable
    int count;       // integer to store occurrences

    // Loop to perform the operation 5 times
    for (int i = 0; i < 5; i++) {
        printf("Enter a string: ");
        scanf(" %[^\n]", str);  // read string including spaces

        printf("Enter a character to search: ");
        scanf(" %c", &ch);      // read single character

        // Pass string and character to function
        count = countCharOccurrences(str, ch);

        // Print the result
        printf("The character '%c' occurs %d times in the string.\n\n", ch, count);
    }

    return 0;
}

// Function definition
int countCharOccurrences(char str[], char ch) {
    int i, count = 0;

    // Compare each character of the string
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;  // increment when match found
        }
    }

    return count;  // return total occurrences
}
