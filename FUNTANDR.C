/* FUNCTION TAKE SOMETHING BUT RETURN NOTHING*/
#include<stdio.h>
#include<conio.h>

void evenodd(int);
void main()
{ int n;
  clrscr();
  printf("Enter the number: ");
  scanf("%d",&n);

  evenodd(n);
  getch();
}
void evenodd(int a)
{
if(a%2==0)
printf("%d is a Even number",a);
else
printf("%d is a Odd number",a);
}