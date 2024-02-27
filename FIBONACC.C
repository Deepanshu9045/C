#include<stdio.h>
#include<conio.h>
void main()
{ int a=0,b=1,s,n,i;
  clrscr();
  printf("\n Enter number of steps");
  scanf("%d",&n);
  if(n==1)
   printf("%d",a);
   else
    { printf("%d,%d",a,b);
     for(i=3;i<=n;i++)
     { s=a+b;
       printf("%d",s);
       a=b;
       b=s;
     }
    }
    getch();
}