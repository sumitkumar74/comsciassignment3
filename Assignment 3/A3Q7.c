//Write a C program to print all Strong numbers between 1 to n
#include<stdio.h>
void main() 
{int i,j,originalNum,n,lastDigit,sum; 
long fact;
printf("Enter the number till you want strong numbers: "); 
scanf("%d", &n);
printf("\n");

for(i=1;i<=n;i++)
{originalNum=i;
 sum=0;
	while(i>0) 
   {lastDigit=i%10;
    fact=1;
   for(j=1; j<=lastDigit; j++) 
     {fact*=j; } 
   sum+=fact; 
   i/=10;}
i=originalNum;    
if(sum==i)
printf("%d ",i); 
}
}