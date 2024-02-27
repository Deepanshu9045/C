#include<stdio.h>
#include<conio.h>
enum weekday{Sun=1,Mon,Tue,Wed,Thu,Fri,Sat};
void main()
{ enum weekdays w;
  clrscr();
  for(w=Sun;w<=Sat;w++)
  printf("\n%d",w);
  getch();
}