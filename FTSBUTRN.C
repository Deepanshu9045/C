#include<stdio.h>
#include<conio.h>
void evenodd(int);
void main()
{ int n;
  printf("Enter the number:");
  scanf("%d",&n);

  evenodd(n);
  getch();
}
void evenodd(int a)
{
if(a%2==0)
printf("%d Even number\n\n",a);
else
printf("%d Odd number\n\n",a);
}