#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("/n enter the number:");
scanf("%d",&num);
if(num>0)
	printf("Positive");
else if(num<0)
	printf("Negative");
else
	printf("Zero");
}