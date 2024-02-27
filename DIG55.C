#include<stdio.h>
#include<conio.h>
void main()
{
    int array1[5][5],i,j,sum = 0;
    clrscr();
	for (i = 0; i < 5; i++)
	{
	    for (j = 0; j < 5; j++)
	    {
		 printf("\nEnter a[%d][%d] value :: ",i,j);
		 scanf("%d", &array1[i][j]);
	}
    }

    printf("\nThe Diagonals elements of a matrix are :: \n");

    /*check condition to print diagonals, matrix must be square matrix*/
    if(5==5)
    {
	    /*print diagonals*/
	    for(i=0;i<5;i++)
	    {
		for(j=0;j<5;j++)
		{

		    if(i==j)
			printf("\t%d", array1[i][j]);    /*print elements*/
		    else
			printf("\t");   /*print space*/
		}
		printf("\n\n");   /*after each row print new line*/
	    }
    }
    else
    {
	printf("\nMatrix is not a Square Matrix.");
    }

    getch();
}