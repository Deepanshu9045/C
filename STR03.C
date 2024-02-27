/*PROGRAM FOR READING A LINE OF TEXT CONTAINING A SERIES IF WORDS*/
#include<stdio.h>
#include<conio.h>
void main()
{ int c;
  char line[100],character;
  clrscr();
  c=0;
  printf("Enter text\n");
  do
  {character=getchar();
   line[c]=character;
   c++;
  }
  while(character!='\n');
  c=c-1;
  line[c]='0';
  printf("\n%s\n",line);
  getch();
}
