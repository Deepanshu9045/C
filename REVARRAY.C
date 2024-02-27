#include<stdio.h>
#include<conio.h>
main()
{ int a[100],i,j,k,p,q;
  clrscr();
  printf("How many element?\n");
  scanf("%d",&p);
  printf("Enter the element one after other\n");
  for(i=0;i<p;i++)
  scanf("%d",&a[i]);
  /* Reversing is done now*/
  for(i=0;i<p/2;i++)
  { q=a[i];
    k=p-1-i;
    a[i]=a[k];
    a[k]=q;
  }
  printf("Array after reverse\n");
   for(i=0;i<p;i++)
   printf("%d\n",a[i]);
  getch();
}