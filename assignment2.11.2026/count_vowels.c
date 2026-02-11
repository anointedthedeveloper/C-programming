#include <stdio.h>
#include <ctype.h>

int main() {
    char text[200];
    int count = 0;
    
    printf("Enter a line of text: ");
    fgets(text, 200, stdin);
    
    for(int i = 0; text[i] != '\0'; i++) {
        char ch = tolower(text[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    printf("Number of vowels: %d\n", count);
    return 0;
}
