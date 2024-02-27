#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char gender;
clrscr();
printf("Enter your gender: ");
scanf("%c",&gender);
printf("Enter your age: ");
scanf("%d",&age);

if(age>=18&&gender=='F')
{
printf("Eligile for marriage");
}
else if(age>=21&&gender=='M')
{
printf("Eligible for marriage");
}
else
{
printf("Not eligible for marriage");
}
getch();
}
