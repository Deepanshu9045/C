#include<stdio.h>
#include<conio.h>
void main()
{ int a[5],b[5],c[10],i,j;
  clrscr();
    printf("Enter the value of first array:\n");
   for(i=0;i<5;i++)
   scanf("%d",&a[i]);
   printf("Enter the value of second array:\n");
   for(i=0;i<5;i++)
   scanf("%d",&b[i]);

       j=0;

    for(i=0;i<5;i++)
      { c[j]=a[i];
	j++;
      }
    for(i=0;i<5;i++)
      {	c[j]=b[i];
	j++;
      }
   printf("Value of merged array is:\n");
   for(i=0;i<10;i++)
   printf("%d\n",c[i]);
   getch();
}