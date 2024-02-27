#include<stdio.h>
#include<conio.h>
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
   {int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=a+b;
    printf("Sum of first and second number is=%d",c);
    break;
   }
    case 2:
   {int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=a-b;
    printf("Difference of first and second number is=%d",c);
    break;
   }
    case 3:
   {int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=a*b;
    printf("Multiplication of first and second number is=%d",c);
    break;
   }
   case 4:
   {int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=a/b;
    printf("Division of first and second number is=%d",c);
    break;
   }
   default:
   printf("I am in default\n");
   exit(0);
  }
}//while closes getch();
}