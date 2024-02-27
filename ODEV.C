#include<stdio.h>
#include<conio.h>
int main()
{ int a[10],i;
  clrscr();
  printf("Enter the array: \n");
  for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("\nAll odd number are:\n");
  for(i=0;i<10;i++)
  {if(i%2==0)
  printf("%d\n",a[i]);
  }
  printf("All even number are:\n");
  for(i=0;i<10;i++)
  {if(i%2!=0)
  printf("%d\n",a[i]);
  }

  getch();
  return 0;
  }