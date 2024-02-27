#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{ FILE *file;
  char c[100];
  clrscr();
  file=fopen("c:\\FILE\\abc.txt","w");

  if(file==NULL)
   {
    printf("File not found\n");
    exit(0);
   }
   else
   {
   printf("Enter lines to write in file:\n");
   while(strlen(gets(c))>0)
   {
    fputs(c,file);
    fputs("\n",file);
    }
    }
  fclose(file);
  getch();
}
