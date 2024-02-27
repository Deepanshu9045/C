#include<stdio.h>
#include<conio.h>

void main()

{ int f,celsius;

 printf("\nEnter temperature in fahrenheit:");
 scanf("%d",&f);

  celsius=5*(f-32)/9;
 printf("Temperature in celsius is:%d",celsius);

 getch();
 }