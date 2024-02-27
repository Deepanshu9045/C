#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
while(1)
{
 int i;
 printf("\n1.Addition\n");
 printf("2.Difference\n");
 printf("3.Multiply\n");
 printf("4.Division\n");

 printf("Enter the value of i:");
 scanf("%d",i);

 switch(i)
 {
 case 1:
 { int a,b,c;
   a=20;b=10;
   c=a+b;
   printf("Sum of a and b is=%d",c);
   break;
 }
  case 2:
 { int a,b,c;
   a=20;b=10;
   c=a-b;
   printf("Difference of a and b is=%d",c);
   break;
 }
 case 3:
 { int a,b,c;
   a=20;b=10;
   c=a*b;
   printf("Multiply of a and b is=%d",c);
   break;
 }
 case 4:
 { int a,b,c;
   a=20;b=10;
   c=a/b;
   printf("Division of a and b is=%d",c);
   break;
 }
 default:
 printf("I am in default\n");
 exit(0);
}
}
// While closes
getch();
}