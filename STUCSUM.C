#include<stdio.h>
#include<conio.h>
struct complex
{ int real;
  int imag;
};
void main()
{ struct complex n[10];
  int i;
  clrscr();
  printf("Enter ten complex numbers:\n");
  for(i=0;i<10;i++)
  {
  printf("Enter complex number:%d",i+1);

  printf("\nReal Part:");
  scanf("%d",&n[i].real);

  printf("\nImag Part:");
  scanf("%d",&n[i].imag);
  }
  c.real=c.imag=0;
  for(i=0;i<10;i++)
  {
    c.real+=n[i].real;
    c.imag+=n[i].imag;
  }
  printf("\nThe SUM of 10 Complex Number is:\n");
  printf("Real\timag\n");
  printf("%d\t%d",c.real,c.imag);
  getch();
}