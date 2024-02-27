#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ float TA;
  int unit;
  clrscr();
  printf("Enter the total unit of consumption:\n");
  scanf("%d",&unit);
  if(unit<=100)
  {
   TA=unit*5;
  }
  else if(unit<=300)
  {
  TA=500+(unit-100)*7;
  }
  else if(unit<=400)
  {
  TA=500+(200*7)+(unit-300)*7.5;
  }
  else if(unit>400)
  {
  TA=500+(200*7)+(100*7.5)+(unit-400)*8;
  }
  printf("Total Amount=$ %.2f\n",TA);
  getch();
}