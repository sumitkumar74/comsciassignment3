// Program to print all prime factors 
# include <stdio.h> 
# include <math.h> 

void main() 
{int n,i; 
printf("Enter a number:");
scanf("%d",&n); 
printf("\nPrime factors of %d: ",n);

while (n%2 == 0) 
{printf("%d ", 2); 
  n = n/2;  } 

for(i=3; i<=sqrt(n); i+=2) 
{while(n%i == 0) 
   {printf("%d ", i); 
     n/=i; } 
} 
if (n > 2) 
printf ("%d ", n);
}