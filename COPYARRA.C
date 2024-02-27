#include<stdio.h>
#include<conio.h>
void main()
{ int i,a[10],b[10],c[10],d[10],s[10],x;
  clrscr();
  printf("Enter value for x:\n");
  scanf("%d",&x);
  for(i=0;i<5;i++)
   {
    printf("Enter d[%d]:",i);
    scanf("%d",&d[i]);
    a[i]=0;
    b[i]=x;
    c[i]=i;
    s[i]=d[i];
   }
   for(i=0;i<5;i++)
   printf(" %d %d %d %d %d\n",a[i],b[i],c[i],d[i],s[i]);
   getch();
}