//Write a C program to check whether a number is Strong number or not
#include<stdio.h>
void main() 
{int i,originalNum,n,lastDigit,sum=0; 
long fact=1;
printf("Enter any number: "); 
scanf("%d", &n);
originalNum = n;

while(n>0) 
{lastDigit=n%10;
   fact=1;
   for(i=1; i<=lastDigit; i++) 
     {fact*=i; } 
   sum+=fact; 
   n/=10; }
     
if(sum==originalNum)
printf("\n%d is strong number",originalNum); 

else 
printf("\n%d is NOT a strong number",originalNum);
}