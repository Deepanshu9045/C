#include<stdio.h>
#include<conio.h>
void main()
{ int a[10],i,n,tmp=0,sum=0,percentage;
  clrscr();
  printf("Enter number of subject :\n");
  scanf("%d",&n);

  tmp=n*100;
  printf("Enter the Marks :\n");
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  { sum=sum+a[i];
  }
  percentage = (sum * 100)/ tmp;

  printf("Percentage=%d",percentage);
  getch();
}