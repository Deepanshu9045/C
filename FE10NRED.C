#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{ FILE *fp;
  int i,n;
  char c;
  clrscr();
  fp=fopen("c:\\file\\number.dat","r");
  printf("\nEnter 10 number");
  for(i=1;i<=10;i++)
  {
  fscanf(fp,"%d%c",&n,&c);
  printf("%d\n",n);
  }
  fclose(fp);
  getch();
  }