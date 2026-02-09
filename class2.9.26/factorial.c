#include <stdio.h>

int main()
{
    int number;
    long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 1)
    {
        factorial = factorial * number;
        number--;
    }

    printf("Factorial is: %ld", factorial);

    return 0;
}
