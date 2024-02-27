#include<stdio.h>
#include<conio.h>
void main()
{ int i=2,j=3,k,l;
  float a,b;
  clrscr();
  k=i/j*j;
  i=j/i*i;
  a=i/j*j;
  b=j/i*i;
  printf("k=%d\nl=%d\na=%f\nb=%f",k,l,a,b);
  getch();
}