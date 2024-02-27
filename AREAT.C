#include<stdio.h>
#include<conio.h>
void main()
{ int b,h,area;
  clrscr();
  printf("Enter base of triangle:");
  scanf("%d",&b);
  printf("Enter height of triangle:");
  scanf("%d",&h);
  area=(b*h)/2;
  printf("Area of triangle is:%d",area);
  getch();
}


