#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, diff;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    diff = abs(a - b);
    
    if (diff == a || diff == b) {
        printf("Difference is equal to value %d\n", diff);
    } else {
        printf("Difference is not equal to any of the values entered\n");
    }
    
    return 0;
}
