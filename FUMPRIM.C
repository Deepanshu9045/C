#include<stdio.h>
#include<conio.h>
int prime(int);

main()
{ int n,result;
clrscr();
printf("Enter an integer to check whether it is prime or not:\n");
scanf("%d",&n);

result=prime(n);

if(result==1)
printf("%d is prime number.\n",n);
else
printf("%d is not prime number.\n",n);
getch();
return 0;
}
int prime(int a)
{
 int i;
 for(i=2;i<=a-1;i++)
 {
  if(a%i==0)
  return 0;
 }
 return 1;

}