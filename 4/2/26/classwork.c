#include <stdio.h>

int main() {
    int M1, M2, M3;
    float per;

    printf("Enter marks of 3 subjects (out of 100):\n");
    scanf("%d %d %d", &M1, &M2, &M3);
   
    per = (M1 + M2 + M3) / 3.0;

    printf("Percentage = %.2f\n", per);

    if (per >= 90)
        printf("Grade: E+\n");
    else if (per >= 80)
        printf("Grade: E\n");
    else if (per >= 70)
        printf("Grade: A+\n");
    else if (per >= 60)
        printf("Grade: A\n");
    else if (per >= 50)
        printf("Grade: B+\n");
    else
        printf("Grade: FAIL\n");
    return 0;
}
