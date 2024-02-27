#include<stdio.h>
#include<conio.h>

void main()

{ int a,b,c,perimeter;
 clrscr();
 printf("Enter first side of triangle:");
 scanf("%d",&a);
 printf("Enter second side of triangle:");
 scanf("%d",&b);
 printf("Enter third side of triangle:");
 scanf("%d",&c);
 perimeter=a+b+c;
 printf("Perimeter of triangle is:%d",perimeter);
 getch();
 }