#include<stdio.h>
#include<conio.h>
void main()
{ int arr[10],i,*p;
  clrscr();
  p=&arr[0];
  printf("\nEnter 10 number:");
  for(i=0;i<10;i++)
  {scanf("%d",p);
  p++;
  }
  p=&arr[0];
  printf("\nThe List of values are:");
  for(i=0;i<10;i++)
  {
  printf("\n%d",*(p+i));
  }
  getch();
}
