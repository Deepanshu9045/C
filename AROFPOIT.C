#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,c,d,e;
  int *p[5],i;
  clrscr();
  p[0]=&a;
  p[1]=&b;
  p[2]=&c;
  p[3]=&d;
  p[4]=&e;
  printf("\nEnter five numbers:\n");
  for(i=0;i<5;i++)
  scanf("%d",p[i]);
  printf("Entered five numbers are:\n");
  for(i=0;i<5;i++)
  printf("\n%d",*p[i]);
  getch();
}
