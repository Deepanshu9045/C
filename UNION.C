#include<stdio.h>
#include<conio.h>
union number
{ int a;
  long b;
  char c;
};
void main()
{
union number n;
clrscr();
n.a=10;
printf("\nFirst element=%d\n",n.a);
n.b=40000;
printf("Second element=%lu\n",n.b);
n.c='A';
printf("Third element=%c\n",n.c);
getch();
  }
