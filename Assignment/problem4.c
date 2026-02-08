#include <stdio.h>

int main() {
    float salary, total;
    char grade;
    
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter grade (A/B/Other): ");
    scanf(" %c", &grade);
    
    if (grade == 'A' || grade == 'a') {
        total = salary + 300;
    } else if (grade == 'B' || grade == 'b') {
        total = salary + 250;
    } else {
        total = salary + 100;
    }
    
    printf("Total salary: %.2f\n", total);
    
    return 0;
}
