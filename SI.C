#include<stdio.h>
#include<conio.h>
void main()
{  float amount, rate, time, si;
   clrscr();

   printf("\nEnter Principal Amount : ");
   scanf("%f", &amount);

   printf("\nEnter Rate of Interest : ");
   scanf("%f", &rate);

   printf("\nEnter Period of Time   : ");
   scanf("%f", &time);

   si = (amount * rate * time) / 100;
   printf("\nSimple Interest : %f", si);
getch();
}