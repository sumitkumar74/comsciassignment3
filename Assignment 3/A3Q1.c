//Write a C program to find power of a number using for loop.

#include <stdio.h>
void main()
{int i,p;
double n,power=1;
printf("Enter the number:");
scanf("%lf",&n);
printf("\nEnter power:");
scanf("%d",&p);

if(n<0)
n=1/n;

for(i=1;i<=p;i++)
power*=n;

printf("\n%.2lf power %d =%.3lf",n,p,power);
}