#include<stdio.h>
#include<conio.h>
 void main()
{ int n,r,s=0;
  clrscr();
  printf("Enter any digit no.:");
  scanf("%lu",&n);

  while(n!=0)
  { s=n%10;
    n=n/10;
    s=s+r;
  }

  printf("\n Sum of its digit is=%lu",s);
  getch();
  return 0;
}