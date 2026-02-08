#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    if (marks > 75) {
        printf("Grade A\n");
    } else if (marks > 60) {
        printf("Grade B\n");
    } else if (marks > 45) {
        printf("Grade C\n");
    } else if (marks > 35) {
        printf("Grade D\n");
    } else {
        printf("Grade E\n");
    }
    
    return 0;
}
