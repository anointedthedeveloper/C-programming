#include<stdio.h> 

// Function prototypes to declare functions before they are used
void italy(); 
void brazil(); 
void argentina(); 

int main() { 
    printf("I am in main"); 
    italy(); 
    brazil(); 
    argentina(); 
    return 0; // Added return statement
} 

// Function definitions with explicit 'void' return types
void italy() { 
    printf("\n I am in italy"); 
} 

void brazil() { 
    printf("\n I am in brazil"); 
} 

void argentina() { 
    printf("\n I am in argentina"); 
}
