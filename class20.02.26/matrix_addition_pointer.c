#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3];
    int *p1, *p2, *p3;
    
    printf("Enter elements of first 3x3 matrix:\n");
    p1 = &mat1[0][0];
    for(int i = 0; i < 9; i++) {
        scanf("%d", p1 + i);
    }
    
    printf("Enter elements of second 3x3 matrix:\n");
    p2 = &mat2[0][0];
    for(int i = 0; i < 9; i++) {
        scanf("%d", p2 + i);
    }
    
    p1 = &mat1[0][0];
    p2 = &mat2[0][0];
    p3 = &sum[0][0];
    
    for(int i = 0; i < 9; i++) {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }
    
    printf("Sum of matrices:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
