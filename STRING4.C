#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,count=0;
clrscr();
printf("\n enter the string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
 if(str[i]==' ')
  printf("\n");
 else
  printf("%c",str[i]);
}
getch();
}
