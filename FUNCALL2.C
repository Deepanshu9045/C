#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void sum();//function prototype
void diff();//function prototype
void multi();//function prototype
void divi();//function prototype
main()
{ clrscr();
  while(1)
  {int i;
   printf("\n1.Addition\n");
   printf("2.Difference\n");
   printf("3.Multiplication\n");
   printf("4.Division\n");

   printf("Enter the value of i:");
   scanf("%d",&i);

  switch(i)
  {
   case 1:
   {
    sum();//function call
    break;
   }

   case 2:
   {
    diff();//function call
    break;
   }

   case 3:
   {
    multi();//function call
    break;
   }

   case 4:
   {
    divi();//function call
    break;
   }
   default:
   printf("I am in default\n");
   exit(0);

}
}//while closes getch();
}// main ends

void sum()    //function definition
{ int a,b,c;
  printf("\nEnter the value of A:");
  scanf("%d",&a);
  printf("\nEnter the value of B:");
  scanf("%d",&b);
  c=a+b;
  printf("\nSum of A and B=%d",c);
}
void multi()    //function definition
{ int a,b,c;
  printf("\nEnter the value of A:");
  scanf("%d",&a);
  printf("\nEnter the value of B:");
  scanf("%d",&b);
  c=a*b;
  printf("\nMultiplication of A and B=%d",c);
}
void diff()     //function definition
{ int a,b,c;
  printf("\nEnter the value of A:");
  scanf("%d",&a);
  printf("\nEnter the value of B:");
  scanf("%d",&b);
  c=a-b;
  printf("\nDifference of A and B=%d",c);
}
void divi() //function definition
{ int a,b,c;
  printf("\nEnter the value of A:");
  scanf("%d",&a);
  printf("\nEnter the value of B:");
  scanf("%d",&b);
  c=a/b;
  printf("\nDivision of A and B=%d",c);
}


