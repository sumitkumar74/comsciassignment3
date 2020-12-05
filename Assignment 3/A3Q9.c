//Write a C program to input week number and print weekday.
#include <stdio.h>
 
void main()
{const char *WEEKS[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; 
int week;

printf("Enter week number (1-7): "); 
scanf("%d", &week); 	
printf("\n");

if(week > 0 && week < 8)
 printf("%s", WEEKS[week-1]);
 
else 
printf("\nInvalid input! Please enter week number between 1-7."); 
}