#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
while(1);
 {
 int i;
 printf("\n 1.Addition\n");
 printf("\n 2.Subtraction\n");
 printf("\n 3.Multiplication\n");

 printf("\n 4.Division\n");

 printf("Enter the value of i");
 scanf("%d",&i);

 switch(i)
 {
 case 1:
 {
 int a,b,c;
 a=10;b=20;
 c=a+b;
 printf("Sum of a nad b is:%d",c);
 break;
 }
 case 2:
 {
 int a,b,c;
 a=10;b=20;
 c=a-b;
 printf("Difference of a nad b is:%d",c);
 break;
 }
 case 3:
 {
 int a,b,c;
 a=10;b=20;
 c=a*b;
 printf("Multiplication of a nad b is:%d",c);
 break;
 }
 case 4:
 {
 int a,b,c;
 a=10;b=20;
 c=b/a;
 printf("Division of a nad b is:%d",c);
 break;
 }
 default:
 printf("I an in default\n");
 exit(0);
 }
}
//While closes
getch();
}