#include<stdio.h>
#include<conio.h>
int main()
{ int a[10],i,sum=0;
  clrscr();
  printf("Enter the array: \n");
  for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
  sum=sum+a[i];
  }
  printf("sum array is: %d",sum);

  getch();
  return 0;
  }