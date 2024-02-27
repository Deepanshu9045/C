#include<stdio.h>
#include<stdlib.h>
void main()
{ FILE *fp;
  int i,n;
  fp=fopen("c:\\FILE\\number.txt","w");
  printf("\nEnter 10 numbers:\n");
  for(i=1;i<=10;i++)
  {
  scanf("%d",&n);
  fprintf(fp,"%d\n",n);
  }
  fclose(fp);
}