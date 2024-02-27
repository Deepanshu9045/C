#include<stdio.h>
#include<conio.h>
void main()
{ int n,i,j;
  clrscr();
  printf("Enter a number: ");
  scanf("%d",&n);

  for(i=n;i>=1;i--)
  { for(j=1;j<=i;j++)
    { printf("hello ");
    }
    printf("\n");
  }
  getch();
}