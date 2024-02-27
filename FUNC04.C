/* A PROGRAM TO DEMONSTRATE CALL BY VALUE
*/
void swap (int,int);
void main()
{
 int a=10,b=20;
 clrscr();
 printf("\n%d\t%d",a,b);
 swap(a,b);
 printf("\n%d\t%d",a,b);
 getch();
}
void swap(int a,int b)
{
 int t;
 t=a;
 a=b;
 b=t;
 printf("\n%d\t%d",a,b);
}
