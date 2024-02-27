#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{ FILE *fp;
  char c,filename[50];
  clrscr();
  printf("Enter file name:");
  gets(filename);
  clrscr();
  fp=fopen(filename,"r");
  while(!feof(fp))
  {
  c=fgetc(fp);
  printf("%c",c);
  }
  fclose(fp);
  getch();
}