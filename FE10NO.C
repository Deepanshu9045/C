#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{ FILE *fp;
  int i,n;
  clrscr();
  fp=fopen("c:\\file\\number.txt","w");
  printf("\nEnten 10 number:\n");
  for(i=1;i<=10;i++)
  {
  scanf("%d",&n);
  fprintf(fp,"%d\n",n);
  }
  fclose(fp);
  }