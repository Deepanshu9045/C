/*PROGRAM TO COPY ONE STRING INTO ANOTHER AND COUNT THE NO. CHAR CPY*/
#include<stdio.h>
#include<conio.h>
void main()
{ int i;
  char string1[100],string2[100];
  clrscr();
  printf("Enter the srtring\n");
  scanf("%s",string2);
  for(i=0;string2[i]!='\0';i++)
  string1[i]=string2[i];
  string1[i]='\0';
  printf("\n");
  printf("%s\n",string1);

  printf("Number of characters=%d\n",i);
  getch();
}