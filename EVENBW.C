#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,i;
  clrscr();
  printf("Enter the two numbers:\n");
  scanf("%d%d",&a,&b);
  printf("All even number between them is:");
  for(i=a;i<=b;i++)
  {if(i%2==0)
   printf("\n%d",i);
  }

  getch();
}