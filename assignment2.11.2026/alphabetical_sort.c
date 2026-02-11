#include <stdio.h>
#include <string.h>

int main() {
    char names[7][20] = {"George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William"};
    char temp[20];
    
    for(int i = 0; i < 6; i++) {
        for(int j = i + 1; j < 7; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    for(int i = 0; i < 7; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
