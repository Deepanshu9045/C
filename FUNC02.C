/*A PROGRAM TO PASS A NUMBER TO A FUNCTION AND FUNCTION SHOULD PRINT
  FIBONACCI SERIES UPTO THE PASSED NUMBER OF STEPS
 NO OF STEPS = 10
 0,1,1,2,3,5,8,13,21
*/
void fibonacci(int n);
void main()
{
 int n;
 clrscr();
 printf("\nEnter the number of steps :");
 scanf("%d",&n);
 fibonacci(n);
 getch();
}
void fibonacci(int n)
{
 int a=0,b=1,s,i;
 if(n<=0)
  return;
 else if(n==1)
  printf("%d, ",a);
 else
 {
  printf("%d, %d, ",a,b);
  for(i=3;i<=n;i++)
  {
   s=a+b;
   printf("%d, ",s);
   a=b;
   b=s;
  }
 }
}
