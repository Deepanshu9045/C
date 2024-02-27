#include<stdio.h>
#include<conio.h>

void main()

{ int c,fahrenheit;
 clrscr();
 printf("Enter temperature in celsius:");
 scanf("%d",&c);

  fahrenheit=9*c/5 +32;
 printf("Temperature in fahrenheit is:%d",fahrenheit);

 getch();
 }