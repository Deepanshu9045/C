/*PROGRAM FOR REVERSE STRING*/
#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,count=0;
clrscr();
printf("\n Enter the string:");
gets(str);
for(i=0;str[i]!='\0';i++)
count++;
printf("Reverse order of entered string is:\n");
for(i=count-1;i>=0;i--)
printf("%c",str[i]);
getch();
}
