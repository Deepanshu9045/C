#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,sta,end,s;
 clrscr();
 printf("Enter starting number:");
 scanf("%d",&sta);
 printf("Enter ending number:");
 scanf("%d",&end);

 for(i=sta;i<=end;i++)
 {
   s=0;
   for(j=1;j<=i/2;j++)
   {
    if(i%j==0)
    s+=j;
   }
   if(i==s)
   printf("\n%d",i);
 }
getch();
}
