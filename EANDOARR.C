#include<stdio.h>
#include<conio.h>
void main()
{ int a[10],i;
  clrscr();
  printf("Enter the elements in array:\n");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  printf("\nAll odd number in array are:");
  for(i=0;i<10;i++)
  { if(i%2==0)
    printf("\n%d",a[i]);
  }
  printf("\nAll even number in array are:");
  for(i=0;i<10;i++)
  { if(i%2!=0)
    printf("\n%d",a[i]);
  }
  getch();
}