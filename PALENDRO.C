#include<stdio.h>
#include<conio.h>
 void main()
{ int n,r,s=0,t;
  clrscr();
  printf("Enter any digit no.:");
  scanf("%lu",&n);
  t=n;

  while(n!=0)
  { r=n%10;
    n=n/10;
    s=(s*10)+r;
  }
  if(t==s)

  printf("palendrome no");
  else
  printf("Not a palendrome no");
  getch();
}