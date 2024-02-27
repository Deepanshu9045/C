#include<stdio.h>
#include<conio.h>

void main()
{ float a,b,r;
  char op;
  clrscr();
  printf("Enter two no.:");
  scanf("%f%f",&a,&b);
  printf("Enter operator (+,-,*,/):");
  scanf("%c",&op);
      switch(op)
       { case'+':
	  r=a+b;
	  break;
	 case'/':
	  r=a/b;
	  break;
	 default:
	 r=0;
       }
      printf("\n Result=%f",r);
  getch();
}