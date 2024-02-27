#include<stdio.h>
#include<conio.h>
int ret(int);
void main()
{ int n,m;
  printf("\nEnter the number:");
  scanf("%d",&n);
  m=ret(n);
  printf("%d\n",m);
  getch();
}
int ret(int a)
{ if(a%2==0)
  a=a*a;
  else
  a=a*a*a;
  return(a);
}