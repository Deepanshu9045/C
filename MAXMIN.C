#include<stdio.h>
#include<conio.h>
void main()
{ int a[5],i,max,min;
  clrscr();
  printf("Enter element of array:\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);

  max=a[0];
  for(i=0;i<5;i++)
  {if(a[i]>max)
   max=a[i];
  }
  printf("Larger element=%d\n",max);

  min=a[0];
  for(i=0;i<5;i++)
  {if(a[i]<min)
   min=a[i];
  }
  printf("Smaller element=%d",min);


  getch();
}