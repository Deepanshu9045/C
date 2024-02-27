#include<stdio.h>
#include<conio.h>
 void main()
{ int a[2][2],b[2][2],c[2][2],i,j;
  clrscr();

  printf("Enter the value of matrix A");
  for(i=0;i<2;i++)
  {for(j=0;j<2;j++)
    {scanf("%d",&a[i][j]);
    }
  }

  printf("Enter the value of matrix B");
  for(i=0;i<2;i++)
  {for(j=0;j<2;j++)
    {scanf("%d",&b[i][j]);
    }
  }

  //Addition of two matrix
   for(i=0;i<2;i++)
  {for(j=0;j<2;j++)
   {c[i][j]=a[i][j]+b[i][j];
   }
  }
  printf("Addition of two matrix C is=\n");
  for(i=0;i<2;i++)
  {for(j=0;j<2;j++)
    {scanf("%d\t",c[i][j]);
    }
   printf("\n");
  }
  getch();
}