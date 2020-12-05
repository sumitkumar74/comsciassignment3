//Write a C program to find LCM of two numbers.
#include <stdio.h>
void main()
{int i,x,y;
printf("Enter 2 non zero numbers:");
scanf("%d %d",&x,&y);

for(i=1;;i++)
if(i%x==0 && i%y==0)
break;

printf("\nLCM of %d and %d: %d",x,y,i);
}