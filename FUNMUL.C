#include<stdio.h>
#include<conio.h>
int main()
{ int A[5][5],B[5][5],M[5][5];
  int a,b,p,q,i,j,k,sum=0;
  clrscr();
  printf("Enter number of rows and columns of matrix A:\n");
  scanf("%d%d",&a,&b);
  printf("Enter the elements of matrix A:\n");

  for(i=0;i<a;i++)
  for(j=0;j<b;j++)
  scanf("%d",&A[i][j]);


  {
  printf("Enter number of rows and columns of matrix B:\n");
  scanf("%d%d",&p,&q);
  printf("Enter the elements of matrix B:\n");

  if(b!=p)
  printf("Matrices with entered order can't be multiplied each othyer.\n");

  for(i=0;i<a;i++)
   for(j=0;j<b;j++)
   scanf("%d",&B[i][j]);

  for(i=0;i<a;i++)
  {
   for(j=0;j<b;j++)
   {
     for(k=0;k<p;k++)
     {
      sum=sum+A[i][k]*B[k][j];
     }
     M[i][j]=sum;
     sum=0;
    }
  }
  printf("Product of entered matrix:-\n");

  for(i=0;i<a;i++)
  {
   for(j=0;j<q;j++)
   printf("%d\t",M[i][j]);
   printf("\n");
  }
getch();
return 0;
}
}