#include<stdio.h>
#include<conio.h>
struct complex
{ int real;
  int imag;
};
void main()
{ struct complex n;
  clrscr();
  printf("Enter complex number:");

  printf("\nReal Part:");
  scanf("%d",&n.real);

  printf("\nImag Part:");
  scanf("%d",&n.imag);

  printf("\nThe Complex Number is: %di%d",n.real,n.imag);
  getch();
}