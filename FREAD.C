#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{ FILE *file;
  char c;
  clrscr();
  file=fopen("c:\\file\\abc.txt","r");
  while(1)
  {
  if(file==NULL)
   {
    printf("File not found\n");
    exit(0);
   }
   else
   {
    c=fgetc(file);
    if(c==EOF)
    {
    break;
    }
  }
    printf("%c",c);

  }
  fclose(file);
  getch();
}
