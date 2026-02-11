#include <stdio.h>

int main() {
    int arr[5] = {34, 45, 56, 67, 89};
    
    printf("Original array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    for(int i = 0; i < 2; i++) {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    
    printf("\nReversed array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
