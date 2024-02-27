#include<stdio.h>
#include<conio.h>
void main()
{ int i;
  clrscr();
  printf("Even no. between 1 to 20 ");

  for(i=0;i<=20;i++);
   { if(i%2==0)
      {
	printf("\t%d",i);
      }
   }
   getch();
}