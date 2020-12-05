//Write a C program to convert Hexadecimal to Decimal number system
#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{char hex[17],point[15]; 
long double decimal=0;
int i,val,len;
printf("Enter any hexadecimal number: ");
scanf("%s",&hex);
printf("\nEnter decimal part:");
scanf("%s",&point);

len = strlen(hex)-1;
for(i=0; hex[i]!='\0'; i++,len--) 
{if(hex[i]>='0' && hex[i]<='9') 
   val = hex[i] - 48; } 
 else if(hex[i]>='a' && hex[i]<='f') 
   val = hex[i] - 97 + 10; } 
 else if(hex[i]>='A' && hex[i]<='F') 
   val = hex[i] - 65 + 10; }
decimal += val * pow(16, len); } 

len=1;
for(i=0; point[i]!='\0'; i++,len++) 
{if(point[i]>='0' && point[i]<='9') 
   val = point[i] - 48; 
 else if(point[i]>='a' && point[i]<='f') 
   val = point[i] - 97 + 10; 
 else if(point[i]>='A' && point[i]<='F') 
   val = point[i] - 65 + 10; 
decimal += val * pow(16, (-len)); }

printf("\nDecimal number = %Lf", decimal); 
}