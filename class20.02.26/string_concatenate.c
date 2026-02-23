#include <stdio.h>

int main() {
    char str1[100], str2[100], str3[200];
    char *p1, *p2, *p3;
    
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    p1 = str1;
    p2 = str2;
    p3 = str3;
    
    while(*p1 != '\0') {
        *p3 = *p1;
        p1++;
        p3++;
    }
    
    while(*p2 != '\0') {
        *p3 = *p2;
        p2++;
        p3++;
    }
    *p3 = '\0';
    
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    printf("Concatenated string: %s\n", str3);
    
    return 0;
}
