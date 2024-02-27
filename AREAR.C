#include<stdio.h>
#include<conio.h>

void main()

{ int l,b,area;
 clrscr();

 printf("\n Enter length of rectangle:");
 scanf("%d",&l);
 printf("Enter breadth of rectangle:");
 scanf("%d",&b);
 area=l*b;
 printf("Area of rectangle is:%d",area);
 getch();
 }