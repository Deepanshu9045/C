/*PROGRAM FOR PRINT SERIES OF WORD THROUGH STRING*/
#include<stdio.h>
#include<conio.h>
void main()
{ char line[100],CHARACTER;
  int c;c=0;
  clrscr();
  printf("Enter the text :\n");
  do
  { CHARACTER=getchar();
    line[c]= CHARACTER;
    c++;
  }
  while(CHARACTER!='\n');
  c=c-1;
  line[c]='\0';

  printf("\n%s\n",line);

  getch();
}
