#include <stdio.h>
int main()
{
float com=0,sales_amt;
char grade;
printf("Enter the Sales Amount: ");
scanf("%f", &sales_amt);
printf("\n Enter the Grade: ");
scanf(" %c", &grade);
if (sales_amt > 10000)
if (grade == 'A')
com = sales_amt * 0.1;
else
com = sales_amt * 0.08;
else
com = sales_amt * 0.05;
printf("\n Commission = %f", com);
return 0;
}