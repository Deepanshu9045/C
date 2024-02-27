#include<stdio.h>
#include<conio.h>
void main()
{ int a[2],b[2],i,j,c;
  clrscr();
  printf("Enter two values of a:\n");
  for(i=0;i<2;i++)
  scanf("%d",&a[i]);
  printf("Enter two values of b:\n");
  for(j=0;j<2;j++)
  scanf("%d",&b[i]);
 {
  a[i]=c;
  b[j]=a[i];
  c=b[j];
 }
  printf("a=%d\n b=%d",b[i],a[j]);
  getch();
}