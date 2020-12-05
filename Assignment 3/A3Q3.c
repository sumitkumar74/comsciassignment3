//Write a C program to find HCF (GCD) of two numbers.
#include <stdio.h>
void main()
{int i,x,y,n;
printf("Enter 2 numbers:");
scanf("%d %d",&x,&y);

for(i=1;i<=x; i++)
if(x%i==0 && y%i==0)
n=i;
printf("\nHCF of %d and %d is:%d",x,y,n);
}