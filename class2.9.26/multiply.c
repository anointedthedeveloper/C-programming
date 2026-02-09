#include <stdio.h>

int main()
{
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
