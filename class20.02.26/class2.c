#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr[5];
    char cpyptr1[5][10], cpyptr2[5][10];
    char *temp;
    int i, j;

    // Input
    for (i = 0; i < 5; i++)
    {
        printf("Enter a string: ");
        scanf("%9s", cpyptr1[i]);   // Prevent overflow
        ptr[i] = cpyptr1[i];
    }

    // Copy original list
    for (i = 0; i < 5; i++)
        strcpy(cpyptr2[i], cpyptr1[i]);

    // Sort using pointer array
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(ptr[i], ptr[j]) > 0)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    // Print original list
    printf("\nThe Original list is:");
    for (i = 0; i < 5; i++)
        printf("\n%s", cpyptr2[i]);

    // Print sorted list
    printf("\n\nThe Sorted list is:");
    for (i = 0; i < 5; i++)
        printf("\n%s", ptr[i]);

    return 0;
}