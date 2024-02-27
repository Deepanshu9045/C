#include<stdio.h>
#include<conio.h>
void main()
  { int a[50],n,i,multi=1;
    clrscr();
    printf("\nEnter how many number you want to add: ");
    scanf("%d",&n);
    printf("\nEnter the numbers you want to add:\n");
    for(i=0;i<n;i++)
     {scanf("%d",&a[i]);
      multi=multi*a[i];
     }
    printf("\Multiplication of numbers is=%d",multi);
    getch();
    }