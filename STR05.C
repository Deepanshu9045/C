#include<stdio.h>
#include<conio.h>
void main()
{ char name[15]="united kingdom";
clrscr();
printf("\n\n");
printf("*123456789012345*\n");
printf("------------\n");
printf("%15s\n",name);
printf("%5s\n",name);
printf("%15.6s\n",name);
printf("%-15.6s\n",name);
printf("%15.0s",name);
printf("%3s\n",name);
printf("%s\n",name);
getch();
}