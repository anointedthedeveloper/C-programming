#include <stdio.h>

int main() {
    int age;
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    
    for(int i = 0; i < age; i++) {
        printf("%s\n", name);
    }
    return 0;
}
