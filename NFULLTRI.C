#include<stdio.h>
#include<conio.h>
void main()
{ int  i,j,n,k,l;
 clrscr();
 printf("\nEnter a no.:");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
   {for(k=i;k<n;k++)
     printf("  ");
    for(j=1;j<=i;j++)
     printf("%d ",j);
    for(l=i-1;l>=1;l--)
     printf("%d ",l);
    printf("\n");
   }
 getch();
}
