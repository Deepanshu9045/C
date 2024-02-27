#include<stdio.h>
#include<conio.h>

void main()

{ int a,b,c,d,e,t;
   clrscr();
 printf("Enter first subject marks:");
 scanf("%d",&a);
 printf("Enter second subject marks:");
 scanf("%d",&b);
 printf("Enter third subject marks:");
 scanf("%d",&c);
 printf("Enter fourth subject marks:");
 scanf("%d",&d);
 printf("Enter fifth subject marks:");
 scanf("%d",&e);
  t=(a+b+c+d+e)/5;
 printf("Total percent of student is:%d",t);

 getch();
 }