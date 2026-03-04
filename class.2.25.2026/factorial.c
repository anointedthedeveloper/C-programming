#include <stdio.h>
int main() {
int n, i;
unsigned long long fact = 1;
printf("Enter an integer: ");
scanf("%d", &n);
if (n < 0)
printf("Error: Factorial of negative numbers is undefined.");
else {
for (i = 1; i <= n; ++i) {
fact *= i;
}
printf("Factorial of %d = %llu\n", n, fact);
}
return 0;
} 
