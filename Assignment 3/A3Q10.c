#include <stdio.h>
void main()
{float sub[5],sum=0,per;
char grade; int i;
printf("Enter marks of physics, chemistry, biology, maths, computer out of 100:");

for(i=0;i<5;i++)
scanf("%f",&sub[i]);

for(i=0;i<5;i++)
sum+=sub[i];
per=sum/5;

if(per>=90 && per<=100)
grade='A';
if(per>=80 && per<90)
grade='B';
if(per>=70 && per<80)
grade='C';
if(per>=60 && per<70)
grade='D';
if(per>=40 && per<60)
grade='E';
else 
grade='F';

printf("\nPercentage:%.2f",per);
printf("%\nGrade:%c",grade);
}