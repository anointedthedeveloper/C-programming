#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    
    if (b != 0) {
        if (a % b == 0) {
            printf("%d is divisible by %d\n", a, b);
        } else {
            printf("%d is not divisible by %d\n", a, b);
        }
    } else {
        printf("Division by zero is not allowed\n");
    }
    
    return 0;
}
