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
count++;
printf("\n total no of characters=%d",count);
getch();
}
