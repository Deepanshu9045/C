#include<stdio.h>
#include<conio.h>
void main()
{ int x;
  char a;
  float p,q;
  clrscr();
  x=125;
  a='A';
  p=10.25; q=18.76;
  printf("%c is stored at address %u\n",a,&a);
  printf("%d is stored at address %u\n",x,&x);
  printf("%f is stored at address %u\n",p,&p);
  printf("%f is stored at address %u\n",q,&q);
  getch();
}