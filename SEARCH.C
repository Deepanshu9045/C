#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,temp=0,flag;
clrscr();
printf("Enter the value of array\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);

printf("Enter the element to be search: ");
scanf("%d",&temp);
for(i=0;i<10;i++)
{
 if(a[i]==temp)
 {
  flag=1;
  break;
  }
  }
  if(flag==1)
  printf("Element found");
  else
  printf("Not found");

getch();
}
