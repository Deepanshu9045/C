#include<stdio.h>
#include<conio.h>
void main()
{ int  i,j,n,k;
 clrscr();
 printf("\nEnter a no.:");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
   {for(k=i;k<n;k++)
     printf("  ");
     for(j=1;j<=(2*i)-1;j++)
     printf("* ");
     printf("\n");
   }
 getch();
}
