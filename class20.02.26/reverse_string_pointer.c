#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    char *start, *end;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    start = str;
    end = str + strlen(str) - 1;
    
    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    printf("Reversed string: %s\n", str);
    return 0;
}
