#include<stdio.h>
#include<stdlib.h>
void main()
{ FILE *fp;
  int i,n;
  char c;
  fp=fopen("c:\\FILE\\number.dat","r");
  for(i=1;i<=10;i++)
  {
  fscanf(fp,"%d%c",&n,&c);
  printf("%d\n",n);
  }
  fclose(fp);
  getch();
}