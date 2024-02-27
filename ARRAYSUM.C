#include<stdio.h>
#include<conio.h>

void main()
{ int a[10],i,sum=0;
  clrscr();
 printf("Enter the ten values array\n");
 for(i=0;i<10;i++)
 { scanf("%d",&a[i]);
   sum=sum+a[i];
 }
 printf("The sum of ten value of array is:%d",sum);
 getch();
}
