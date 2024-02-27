#include<stdio.h>
#include<conio.h>
void main()
{ int a[100],i,j,b,count=0;
 clrscr();
 printf("Enter the number of element in array:\n");
 scanf("%d",&b);

 printf("Enter %d Element of an array:\n",b);
 for(i=0;i<b;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<b;i++)
 {
 for(j=i+1;j<b;j++)
 {
 if(a[i]==a[j])
 {
 count++;
 break;
 }
 }
 }
 printf("\nTotal number of duplicate element=%d",count);

 getch();

}