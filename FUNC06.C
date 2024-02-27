/* A PROGRAM TO DEMOSTRATE RECURSION */
int factorial(int);
void main()
{
 int f,n;
 clrscr();
 printf("\nEnter the no : ");
 scanf("%d",&n);
 f=factorial(n);
 printf("\nFactorial of the number is %d",f);
 getch();
}
int factorial(int a)
{
 int r;
 if(a==0)
  return(1);
 r=a * factorial(a-1);
 return(r);
}
