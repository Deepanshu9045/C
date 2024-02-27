#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 clrscr();
 while(1)
 { int i;
 printf("\nSelect number for an Operator");
 printf("\n1. For Addition '+'");
 printf("\n2. For Subtraction '-'");
 printf("\n3. For Multiplication '*'");
 printf("\n4. For Division '/'");
 printf("\n============================================================");
 printf("\n5. For Square");
 printf("\n6. For Cube");
 printf("\n7. For Square root");
 printf("\n8. For Factorial");

 printf("\n*NOTE:- IF YOU WANT TO LEAVE PRESS ANY NO. >=9*\n");
 printf("\nEnter the number for operation: ");
 scanf("%d",&i);

 switch(i)
 {
  case 1:
  { int a[50],n,i,sum=0;
    clrscr();
    printf("\nEnter how many number you want to add: ");
    scanf("%d",&n);
    printf("\nEnter the numbers you want to add:\n");
    for(i=0;i<n;i++)
     {scanf("%d",&a[i]);
      sum=sum+a[i];
     }
    printf("\Sum of numbers is=%d",sum);
    break;
  }
  case 2:
  { int a,b,c;
    clrscr();
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the Second number:\n");
    scanf("%d",&b);
    c=a-b;
    printf("Difference of two number is=%d\n",c);
    break;
  }
  case 3:
    { int a[50],n,i,multi=1;
    clrscr();
    printf("\nEnter how many number you want to multiply: ");
    scanf("%d",&n);
    printf("\nEnter the numbers you want to multiply:\n");
    for(i=0;i<n;i++)
     {scanf("%d",&a[i]);
      multi=multi*a[i];
     }
    printf("\Multiplication of numbers is=%d",multi);
    break;
  }
   case 4:
  { float a,b,c;
    clrscr();
    printf("Enter the first number:\n");
    scanf("%f",&a);
    printf("Enter the Second number:\n");
    scanf("%f",&b);
    c=a/b;
    printf("Division of two number is=%f\n",c);
    break;
  }
  case 5:
  { int n,square;
    clrscr();
    printf("Enter the number:\n");
    scanf("%d",&n);
    square=n*n;
    printf("Square of two number is=%d\n",square);
    break;
  }
  case 6:
  { int n,cube;
    clrscr();
    printf("Enter the number:\n");
    scanf("%d",&n);
    cube=n*n*n;
    printf("Cube of two number is=%d\n",cube);
    break;
  }
  case 7:
  { double number, squareRoot;
    clrscr();

   printf("Enter a number: ");
   scanf("%lf", &number);

   // computing the square root
   squareRoot = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number, squareRoot);
    break;
  }
  case 8:
  { int n,i,f=1;
    clrscr();

  printf("\n Enter a number: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)

  f=f*i;

  printf("\n Factorial=%d",f,n);
    break;
  }


  default:
  printf("I am in default");
exit(0);
  }
  }
  getch();
  }

