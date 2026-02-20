#include <stdio.h>
#include <string.h>

void makePlural(char *name) {
    // Moves the pointer to the end of the string
    while (*name != '\0') {
        name++;
    }
    // Append 's' and null terminator
    *name = 's';
    *(name + 1) = '\0';
}

int main() {
    char animal[50], bird[50];

    printf("Enter the name of an animal: ");
    scanf("%s", animal);
    printf("Enter the name of a bird: ");
    scanf("%s", bird);

    makePlural(animal);
    makePlural(bird);

    printf("\nPlural forms: %s and %s\n", animal, bird);

    return 0;
}
