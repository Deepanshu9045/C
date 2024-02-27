#include<stdio.h>
#include<conio.h>
int sum(int a[]);
void main()
{ int list[10],i,s;
  clrscr();
  printf("Enter ten numbers:\n");
  for(i=0;i<10;i++)
  scanf("%d",&list[i]);
  s=sum(list);
  printf("\nSum is=%d",s);
  getch();
}
int sum(int a[])
{int i,r=0;
 for(i=0;i<10;i++)
 r=r+a[i];
 return(r);
}