#include<stdio.h>
#include<conio.h>
void main()
{
int x;
x=sum();
printf("Sum of two no is=%d",x);
getch();
}
int sum()
{
int a,b,c;
clrscr();
printf("Enter the Value of a and b:\n");
scanf("%d%d",&a,&b);
c=a+b;
return(c);
}