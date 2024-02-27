#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ float a,b,c,d,r1,r2,imp,rp;
  clrscr();
  printf("Enter a,b,c:\n");
  scanf("%f%f%f",&a,&b,&c);
  d=b*b-4.0*a*c;
  if(d==0)
  {
     printf("roots are real and eqral\n");
     r1=-b/2*a;
     r2=r1;
     printf("root1=%f",r1);
     printf("root2=%f",r2);
  }
else if(d>0)
  {
   printf("root are real and unequal\n");
   r1=(-b+sqrt(d))/2*a;
   r2=(-b-sqrt(d))/2*a;
   printf("root1=%f",r1);
   printf("root2=%f",r2);
  }
else if(d<0)
 {
  d=-d;
  printf("roots are complex\n");
  rp=-b/2*a;
  imp=sqrt(d)/2*a;
  printf("root1=%f+i%f",rp,imp);
  printf("root2=%f-i%f",rp,imp);
 }
 getch();
}