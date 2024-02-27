#include<stdio.h>
#include<conio.h>
void main()
{ int i;
  char string1[80],string2[80];
  printf("Enter a string:\n");
  scanf("%s",string2);

  for(i=0;string2[i]!='\0';i++)

  string1[i]=string2[i];
  string1[i]='\0';

  printf("\n");
  printf("Number of characters=%d\n",i);
  getch();
}
