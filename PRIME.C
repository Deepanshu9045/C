#include<stdio.h>
#include<conio.h>
void main()
{ int n,i,flag=0;
  clrscr();
  printf("\nEnter a no.:");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
   { if(n%i==0)
     flag=flag+1;
   }
   if(flag==0)
   printf("Prime no.");
   else
   printf("Not a prime no.");
 getch();
}