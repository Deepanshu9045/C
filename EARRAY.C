#include<stdio.h>
#include<conio.h>

void main()
{ int a[10],i;
  clrscr();
  printf("Enter a array of ten values:\n");
  for(i=0;i<10;i++)
 { scanf("%d",&a[i]);}
  printf("Values of array is:");
  for(i=0;i<10;i++)
 { printf("%d ",a[i]); }

 getch();
}
