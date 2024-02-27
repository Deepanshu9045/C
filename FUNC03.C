/* A PROGRAM TO PASS A NUMBER WITH THE FUNCTION AND FUNCTION WILL RETURN
   THE FACTORIAL OF THE NUMBER
*/
int factorial(int);
void main()
{
 int f,n;
 clrscr();
 printf("\nEnter a number : ");
 scanf("%d", &n);
 f=factorial(n);
 printf("\nFactorial of the number is %d ",f);
 getch();
}
int factorial(int a)
{
 int r=1,i;
 for(i=1;i<=a;i++)
  r=r*i;
 return(r);
}
