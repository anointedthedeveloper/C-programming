#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    if (a * b >= 1000) {
        printf("Product is equal to or greater than 1000\n");
    } else {
        printf("Product is less than 1000\n");
    }
    
    return 0;
}
