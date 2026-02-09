#include <stdio.h>

int main()
{
    char name[50];
    int age, i;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    for(i = 1; i <= age; i++)
    {
        printf("%s\n", name);
    }

    return 0;
}
