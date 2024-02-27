#include<stdio.h>
#include<conio.h>
void main()
{ unsigned long n,r,s=0;
  clrscr();
  printf("\n\nEnter any digit number:");
  scanf("%lu",&n);

  while(n!=0)
  { r=n%10;
    n=n/10;
    s=(s*10)+r;
  }
  printf("Reverse of its digit is=%lu",s);
  getch();
}